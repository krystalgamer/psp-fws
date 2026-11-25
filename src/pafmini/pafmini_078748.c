#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078748);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078760);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078798);

void func_000787D0(struct Unk_func_000787D0_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk1C;
    if (temp_v0 == 0) {

    } else {
        func_0004C4D8(temp_v0);
    }
}

s32 func_00078800(struct Unk_func_00078800_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = arg0->unk1C;
    if (temp_v0 != 0) {
        var_v1 = func_000417AC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078838);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078850);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092874);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078880);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00078894);

void scePaf_D4C6CC7A(struct Unk_scePaf_D4C6CC7A_0 *arg0) {
    D_000E2000.unk0 = (s32) arg0->unk0;
    D_000E2000.unk4 = (s32) arg0->unk4;
    D_000E2000.unk8 = (s32) arg0->unk8;
    D_000E2000.unkC = (s32) arg0->unkC;
}

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D9FA8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA040);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000788F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00079088);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00079CA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007A138);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007A5D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007A714);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007A86C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007AACC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007AD9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007B040);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007B4FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007B728);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007B818);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007BB34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007BD44);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007BE90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C2D8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA2EC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA2F0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA2F4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA2F8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA2FC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA300);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA304);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA308);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA30C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4C8C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107444);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA310);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA314);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA318);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA31C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA320);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA324);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA328);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA32C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA330);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA334);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA338);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107470);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107474);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA33C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA340);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA344);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA348);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA34C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA350);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA354);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA358);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA35C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA360);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA364);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4CE4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4CE8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4CEC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA368);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA36C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA370);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA374);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA378);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA37C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA380);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA384);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA388);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA38C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA390);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA394);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA398);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA39C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3A0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3A4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3A8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3AC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3B0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3B4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3B8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3BC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3C0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3C4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3C8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3CC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3D0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3D4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107504);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3D8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3DC);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6D10);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3E0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3E4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3E8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3EC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3F0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3F4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3F8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA3FC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA400);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA404);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA408);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA40C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA410);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6D44);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6D70);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6D8C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096A1C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6DFC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D6E1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C47C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C484);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C48C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C494);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C49C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007C4FC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4DC8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4DF4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4E10);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F3008);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F3034);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F3050);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4D88);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4DB4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F4DD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096A1C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107540);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010756C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009339C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093498);
#else
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA414);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA440);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA45C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007CCB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007CDB4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007D294);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097060);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000971B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097404);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009755C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097B10);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097B64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097CBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097E24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097F7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000980D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000939C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093B1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093D20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093E78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009439C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000944F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009465C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000947B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009490C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007D350);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007D4A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007D6F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007D84C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007DF20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007DF74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007E0CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007E234);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007E38C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007E4E4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007E638);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098A18);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007EE24);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007EEE4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000999B8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095F70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009600C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0007FDC4);
#endif

void func_000813F0(struct Unk_func_000813F0_0 *arg0, struct Unk_func_000813F0_1 *arg1) {
    arg0->unk14F0 = (s32) arg1->unk0;
    arg0->unk14F4 = (s32) arg1->unk4;
    arg0->unk14F8 = (s32) arg1->unk8;
    arg0->unk14FC = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00081414);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B04C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00081478);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000814CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000815B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00081810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00081944);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00081FCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082654);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000826B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008275C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C550);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082874);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082A28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082BE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082C18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082D88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082DD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00082E78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008304C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083510);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083560);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083754);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083948);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000839E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083A88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083B28);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D81C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00099C88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00099E84);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A080);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00083BC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00084058);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00084464);

void func_000844BC(void) {
    func_00084464(1, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DA930);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000844DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00084A54);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008519C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008536C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA38);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA3C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA40);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA44);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107B48);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA48);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA4C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA50);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA54);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F53C4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA58);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA5C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA60);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107B64);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107B68);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA64);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA68);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA6C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA70);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA74);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA78);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA7C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA80);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA84);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA88);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA8C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA90);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAA94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085544);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008567C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000856F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085760);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00084DE8);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B76C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000857A4);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000858D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085984);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085A30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085AD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085E08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085EB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00085F64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00086008);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000860B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00086B18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00086F48);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008737C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087494);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087574);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087740);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000877E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087880);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087920);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107CE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1620);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A16C0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087A88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087B28);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087BCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087C70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087D14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087DB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087E5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087F00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00087FF4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E02C);
#else
s32 func_00088170(s32 arg0) {
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088178);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000881D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088218);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088280);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000882DC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088354);

void func_000883DC(struct Unk_func_000883DC_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4C;
        if (temp_v0 != 0) {
            func_0008841C((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008841C);

s32 func_000884E8(struct Unk_func_000884E8_0 *arg0, struct Unk_func_000884E8_1 *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg0->unk0 == arg1->unk0) {
        if ((arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8)) {
            var_a2 = arg0->unkC != arg1->unkC;
        }
    }
    return var_a2;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E350);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E398);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D75FC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D7610);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D76F0_v201);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F58C0);
#endif

#if FW_VERSION == 282
s32 func_00088534(struct Unk_func_00088534_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 == 0) {
        arg0->unk48 = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00088554(struct Unk_func_00088554_0 *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0->unk48 != 0) {
        arg0->unk48 = 0;
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088570);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088664);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000886C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088790);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088860);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088930);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088A00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088A7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088AF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088B74);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EA14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009ED0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EE28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2B70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2C4C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107DC0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107DD4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107DE8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107DFC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5678);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E10);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E14);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E28);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F56A4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E3C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F56CC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F56E0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F56F4);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E64);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E70);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E7C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107E94);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EA0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EAC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EB4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EBC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107ECC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EDC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EE4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EF0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107EF8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F04);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F14);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F20);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F30);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F3C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F48);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F5C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F68);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F84);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107F90);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107FA4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107FB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5870);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5884);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107FCC);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00107FE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009ED0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EE28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EE88);
#endif

#if FW_VERSION == 282
s32 func_00088BF0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1290 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00088C1C(void) {
    return D_000E1290;
}

s32 func_00088C28(void) {
    return D_000E1290;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088C34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088CB4);

void func_00088D5C(M2C_UNK **arg0) {
    *arg0 = &D_000DACA8;
    scePaf_715E8DAB((s32) arg0);
}

void func_00088D84(M2C_UNK **arg0) {
    *arg0 = &D_000DACA8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void func_00088DBC(struct Unk_func_00088DBC_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088DC8);
#endif

#if FW_VERSION == 282
s32 func_00088DC8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_000E1294 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EF90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F2E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F6D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F84C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F8B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F91C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FBC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FC78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FD28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FD9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FE0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FF10);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000373B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0003743C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000374C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000374FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A049C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A04BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A05D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A061C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0774);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000A0774(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1, s32 *, 0), temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A07F0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000A07F0(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            func_0009F8B8(M2C_FIELD(arg0, s32 *, 0x2C) + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0854);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A08A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A092C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0D64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0E04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1250);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1450);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A53EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A15E4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1904);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1A7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1EB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2358);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A26A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A28B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2964);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2A20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2D4C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2F60);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3080);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3640);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3738);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3794);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A380C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3880);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A38F4);
#endif

#if FW_VERSION == 282
s32 func_00088DF4(void) {
    return D_000E1294;
}

s32 func_00088E00(void) {
    return D_000E1294;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088E0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088E8C);

void func_00088F34(M2C_UNK **arg0) {
    *arg0 = &D_000DAD98;
    scePaf_715E8DAB((s32) arg0);
}

void func_00088F5C(M2C_UNK **arg0) {
    *arg0 = &D_000DAD98;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088F94);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00088F94(struct Unk_func_00088F94_0 *arg0, s32 arg1) {
    arg0->pad0[0] = (u8) arg1;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000881B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000881C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088284);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088370);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088398);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000883D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000883DC_v201);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008844C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000884E8_v201);
#endif

#if FW_VERSION == 282
void func_00088F94(struct Unk_func_00088F94_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3954);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A39D4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5BFC);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3A0C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3AEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3D74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3DF0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F58C0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088FA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089000);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089060);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000890FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089198);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008923C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000892A8);

void func_000892C8(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_000892E4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00089300(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_0008931C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00089338(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_00089354(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00089370(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008938C);

s32 func_000893C0(struct Unk_func_000893C0_0 *arg0, s32 arg1) {
    func_0000AC60(arg1, arg0->unk84);
    return 0;
}

void func_000893E8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008940C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008946C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000894CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089568);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089604);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000896A8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089714);
#else
s32 func_00089714(void) {
    sceReg_FA8A5739();
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000885AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000885C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000885E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088600);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008861C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088638);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088654);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088670);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000886A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000886CC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4078);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A41B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A41FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4430);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A44C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4600);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8584);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A85C0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A46F8);
#endif

#if FW_VERSION == 282
void func_00089734(s32 arg0) {
    func_0003DE84(arg0 + 0x20);
}

void func_00089750(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_0008976C(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00089788(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_000897A4(s32 arg0) {
    func_0003DEDC(arg0 + 0x20);
}

void func_000897C0(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_000897DC(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000897F8);

s32 func_0008982C(struct Unk_func_0008982C_0 *arg0, s32 arg1) {
    func_0000AC60(arg1, arg0->unk84);
    return 0;
}

void func_00089854(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089878);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_6147E3D5);
#endif

void func_000898F0(struct Unk_func_000898F0_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_1B043852);
#endif

#if FW_VERSION == 282
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_0B0959FC);
#endif

#if FW_VERSION == 282
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0) {
    void *sp0;
    sceKernelSignalSema(*arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk4, 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema(*arg0->unk0, 1, NULL);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_CA5EF446);
#endif

#if FW_VERSION == 282
void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0) {
    sceKernelSetEventFlag(arg0->unk4, 1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4750);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000A4750(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A476C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_000A476C(void *arg0) {
    void *sp0;
    sceKernelSignalSema(*M2C_FIELD(arg0, s32 **, 0), 1);
    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 4), 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema(*M2C_FIELD(arg0, s32 **, 0), 1, NULL);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A47CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000A47CC(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 4), 1);
}
#endif

void func_000899A8(struct Unk_func_000899A8_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk4, 0U, &sp0);
}

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000A8714(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_000F58C0, 0x200U, 3U, NULL);
}

void scePaf_B884B031(struct Unk_scePaf_B884B031_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000F58C0, 0x200U, 3U, NULL);
}

void func_000A879C(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_C1F72218(struct Unk_scePaf_C1F72218_0 *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (arg0->unk4 != temp_v0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
        sceKernelWaitEventFlag(arg0->unk0, 3U, 0x20, NULL, NULL);
        arg0->unk4 = temp_v0;
    }
    arg0->unk8 += 1;
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

void scePaf_539F2583(struct Unk_scePaf_539F2583_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk8 - 1;
    arg0->unk8 = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 2);
        arg0->unk4 = 0;
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A88D0);

void func_000A894C(void) {
    func_000A88D0(1, 0xFFFF);
}

void func_000A896C(void) {
    func_000A88D0(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_E05F3CEF);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4940);
#endif

#if FW_VERSION == 282
void func_000899CC(struct Unk_func_000899CC_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFA0, 0x200U, 3U, NULL);
}

void scePaf_B884B031(struct Unk_scePaf_B884B031_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFA0, 0x200U, 3U, NULL);
}

void func_00089A54(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_C1F72218(struct Unk_scePaf_C1F72218_0 *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (arg0->unk4 != temp_v0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
        sceKernelWaitEventFlag(arg0->unk0, 3U, 0x20, NULL, NULL);
        arg0->unk4 = temp_v0;
    }
    arg0->unk8 = (s32) (arg0->unk8 + 1);
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

void scePaf_539F2583(struct Unk_scePaf_539F2583_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk8 - 1;
    arg0->unk8 = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 2);
        arg0->unk4 = 0;
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089B88);

void func_00089C04(void) {
    func_00089B88(1, 0xFFFF);
}

void func_00089C24(void) {
    func_00089B88(0, 0xFFFF);
}

void func_00089C44(struct Unk_func_00089C44_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFB4, 0x200U, 3U, NULL);
}

void func_00089C84(struct Unk_func_00089C84_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFB4, 0x200U, 3U, NULL);
}

void func_00089CC4(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089CE0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089CFC(struct Unk_func_00089CFC_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk4 + 1;
    arg0->unk4 = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(arg0->unk0, -2U);
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 2);
}

void func_00089D68(struct Unk_func_00089D68_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk4 - 1;
    arg0->unk4 = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 2);
}

void func_00089DD0(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00089E14(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

void func_00089E34(struct Unk_func_00089E34_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFC0, 0x200U, 4U, NULL);
}

void func_00089E7C(struct Unk_func_00089E7C_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_000DAFC0, 0x200U, 4U, NULL);
}

void func_00089EC4(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089EE0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00089EFC(struct Unk_func_00089EFC_0 *arg0) {
    if (sceKernelPollEventFlag(arg0->unk0, 1, 0x20, 0) >= 0) {
        arg0->unkC = arg0->unk4(arg0->unk8);
        arg0->unk4 = NULL;
        arg0->unk8 = 0;
        sceKernelSetEventFlag(arg0->unk0, 2);
    }
}

s32 scePaf_EB346F51(struct Unk_scePaf_EB346F51_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(arg0->unk0, 4U, 0x20, NULL, NULL);
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_s1 = arg0->unkC;
    sceKernelSetEventFlag((s32) arg0->unk0, 4);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00089FF0);

void func_0008A06C(void) {
    func_00089FF0(1, 0xFFFF);
}

void func_0008A08C(void) {
    func_00089FF0(0, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DABF8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAC90);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DACA8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAD7C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAD98);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAE78);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAF10);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAFA0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAFB4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAFC0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_96857E81);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_E977B833);
#endif

void func_0008A21C(struct Unk_func_0008A21C_0 *arg0) {
    arg0->unk0 = &D_000DAFE8;
    sceKernelDeleteThread(arg0->unk4);
}

void func_0008A244(struct Unk_func_0008A244_0 *arg0) {
    arg0->unk0 = &D_000DAFE8;
    sceKernelDeleteThread(arg0->unk4);
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_80E521C5);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A49CC);
#endif

void func_0008A2AC(void) {
    sceKernelExitThread(0);
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_5775283A);
#endif

#if FW_VERSION == 282
void scePaf_5775283A(struct Unk_scePaf_5775283A_0 *arg0) {
    sceKernelWaitThreadEnd(arg0->unk4, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4A14);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000A4A14(void *arg0) {
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), 0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A2E8);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088D24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00088D74);
#endif

#if FW_VERSION == 282
s32 func_0008A314(struct Unk_func_0008A314_0 *arg0) {
    D_000E202C.unk0 = (s32) arg0->unk0;
    D_000E202C.unk4 = (s32) arg0->unk4;
    D_000E202C.unk8 = (s32) arg0->unk8;
    D_000E202C.unkC = (s32) arg0->unkC;
    D_000E202C.unk10 = (s32) arg0->unk10;
    D_000E202C.unk14 = (s32) arg0->unk14;
    D_000E202C.unk18 = (s32) arg0->unk18;
    D_000E202C.unk1C = (s32) arg0->unk1C;
    return 0;
}

M2C_UNK *func_0008A364(void) {
    return &D_000E202C;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_36CB5601);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_5B202AED);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A400);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_669DE9B1);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4B28);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_50DC7446);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A4B8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DAFE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_BA32D6E6);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A568);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A5B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A5F8);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_EAB7BD23);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4D30);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A678);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A6D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A700);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A758);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A790);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A854);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A8AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A954);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A994);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008A9D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008AAAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_CAF82B9B);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008ABE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008AC5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008ACD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008ADCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008AEC8);

s32 func_0008AFB0(s32 arg0) {
    func_0008B720();
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008AFD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B0D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B1D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B328);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B358);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B3B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B410);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B47C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B4D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B54C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B630);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B65C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B6F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B720);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B818);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B8F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008B988);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008BC6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008BE14);

M2C_UNK *func_0008BEEC(void) {
    return &D_000E2050;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008BEF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008BF2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008BF8C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C0D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C118);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C1BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C260);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C304);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C394);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C424);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C4B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C54C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C5E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C684);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C6B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C718);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C7A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C880);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C908);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008C9C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CA74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CC24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CC94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CCCC);

s32 func_0008CD8C(s32 arg0) {
    func_0008A9D8();
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CDB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CE5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008CFF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D21C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D330);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D440);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D4A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D608);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D76C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F59C8);
#endif

void func_0008D800(void) {
    func_0008D76C(1, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D820);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D878);

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AC144(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000DB0D8;
    if (M2C_FIELD(arg0, u8 *, 0x80) == 0) {

    } else {
        func_000E5F94(0, 0, 0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x7C) > 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0x7C));
    }
    func_000A8BE0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D93C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D9A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A7FB8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A80E4);
#else
void func_0008D8D0(struct Unk_func_0008D8D0_0 *arg0) {
    arg0->unk0 = &D_000DB0D8;
    if (arg0->unk6C == 0) {

    } else {
        func_000CAF7C(0, 0, 0);
    }
    if (arg0->unk68 > 0) {
        sceKernelDeleteEventFlag(arg0->unk68);
    }
    func_0008E7A4((s32) arg0);
}

void func_0008D93C(struct Unk_func_0008D93C_0 *arg0) {
    arg0->unk0 = &D_000DB0D8;
    if (arg0->unk6C == 0) {

    } else {
        func_000CAF7C(0, 0, 0);
    }
    if (arg0->unk68 > 0) {
        sceKernelDeleteEventFlag(arg0->unk68);
    }
    func_0008E7A4((s32) arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D9A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DBB0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DD44);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D93C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008D9A8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A82B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DE0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC710);
#endif

#if FW_VERSION == 282
void func_0008DD88(struct Unk_func_0008DD88_0 *arg0) {
    s32 temp_a4;

    temp_a4 = arg0->unk50;
    if ((temp_a4 != 0) && ((u32) arg0->unk8 < 4U)) {
        if (D_000E20A0 == 0) {
            sceGuDispBuffer((s32) arg0->unk18, (s32) arg0->unk1A, temp_a4 + (arg0->unk38 * arg0->unk42) + 0xFC000000, (s32) (arg0->unk3C * 8) >> arg0->unkC);
            D_000E20A0 = 1;
        }
    }
}
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DE0C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DEA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DF10);

s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008DF90);

#if FW_VERSION == 282
void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0008E024(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}
#endif

void func_0008E040(s32 arg0, s32 arg1) {
    func_00091848((s32) &D_000E20E8, arg0, arg1);
    D_000E20C8 = 1;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8484);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008E078);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008E13C);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_35F003C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_FB3A9617);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8A98);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8BE0);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB394);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB4D8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8D10);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8E40);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008E634);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008E7A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008E8E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EA2C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB0C0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB0D8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00108118);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010815C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010819C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EB78);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001081B8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001081C8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001081E8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB140);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_0598FFD6);
#else
s16 scePaf_0598FFD6(struct Unk_scePaf_0598FFD6_0 *arg0, s32 arg1) {
    if (arg1 != 1) {
        return arg0->unk42;
    }
    return arg0->unk44;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EC24);

s32 func_0008ED14(void) {
    return 0x67;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008ED1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008ED90);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_5C4BF618);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EE64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0008EE64(s32 arg0) {
    func_0000ACD8(arg0 + 0x70, 0);
}
#endif

#if FW_VERSION == 282
void func_0008EE64(s32 arg0) {
    func_0000ACD8(arg0 + 0x60, 0);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EE84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008EF28);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_359CBCAF);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_5EE76FC5);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_3684D457);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_846E1F0A);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_21DBFF5B);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9B48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000A9B48(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x48);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C) + 1;
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_v0;
    if (temp_v0 >= temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x50) + 1;
    M2C_FIELD(arg0, s32 *, 0x50) = temp_v0_2;
    if (temp_v0_2 >= temp_a1) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F7AC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F7F0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F824);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0008F824(struct Unk_func_0008F824_0 *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x60);
    if (var_v0 == 0) {
        var_v0 = func_000AB40C((s32) &D_000E20E8, 1 << M2C_FIELD(arg0, s32 *, 0x64), M2C_FIELD(arg0, s32 *, 0x40) * M2C_FIELD(arg0, s32 *, 0x48));
        M2C_FIELD(arg0, s32 *, 0x60) = var_v0;
    }
    return var_v0 != 0;
}
#endif

#if FW_VERSION == 282
s32 func_0008F824(struct Unk_func_0008F824_0 *arg0) {
    s32 var_v0;

    var_v0 = arg0->unk50;
    if (var_v0 == 0) {
        var_v0 = func_000918E4((s32) &D_000E20E8, 1 << arg0->unk54, arg0->unk38 * arg0->unk40);
        arg0->unk50 = var_v0;
    }
    return var_v0 != 0;
}
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9C14);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC3C8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9CA4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F880);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F8DC);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008F974);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_EBDC149C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9FDC);
#else
void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0008FC24(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008FC40);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_4AB0D3F4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE5A8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0008FE28);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_9122393C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090078);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB100);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB110);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB130);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB140);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090100);

void func_0009021C(void) {
    func_00090100(1, 0xFFFF);
}

void func_0009023C(void) {
    func_00090100(0, 0xFFFF);
}

void func_0009025C(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
    scePaf_4E67BB08(arg0);
}

void func_00090284(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
}

void func_00090294(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
}

void func_000902A4(M2C_UNK **arg0) {
    *arg0 = &D_000DB140;
    scePaf_4E67BB08(arg0);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA6B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA6D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA814);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA8A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AECC0(void *arg0, s32 arg1) {
    s32 temp_a0;

    if (M2C_FIELD(arg0, u8 *, 0x24) != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0xD;
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xC) + 3;
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (((arg1 + (1 << temp_a0)) - 1) & (-1 << temp_a0));
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) ((arg1 + 0xF) & ~0xF);
        M2C_FIELD(arg0, s32 *, 0x64) = 6;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = 6;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA924_v100);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA988);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_952CE8AF);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 scePaf_952CE8AF(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 var_s2;

    var_s2 = arg1;
    temp_s0 = (((s32) ((arg0 << func_000AB680(arg2)) + 7) >> 3) + 0xF) & ~0xF;
    if (arg3 == 2) {
        var_s2 = (var_s2 + 7) & ~7;
    }
    return temp_s0 * var_s2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAA54);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAA70);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000AAA70(void *arg0) {
    return (((s32) ((M2C_FIELD(arg0, s32 *, 0x18) << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3) + 0x1F) & ~0x1F;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAA94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAB18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AADDC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB080);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB130);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000AB130(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x40) * (3 - M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000AF498(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB14C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5A68);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010824C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB154);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00108270);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB260);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB260(void) {
    func_000AB14C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB280);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB280(void) {
    func_000AB14C(0, 0xFFFF);
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB2A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB2F4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB348);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB348(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x20));
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB364);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB364(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x20));
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091848);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB40C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB580);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB680);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_08DD2D50);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 scePaf_08DD2D50(struct Unk_scePaf_08DD2D50_0 *arg0, s32 arg1) {
    return (s32) ((arg1 << arg0->unkC) + 7) >> 3;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFABC);

void func_000AAA54(void) {
    sceKernelDcacheWritebackAll();
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000902CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_93538664);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090714);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000907CC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B00AC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090878);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009090C);

void func_000909B8(void) {
    func_0009090C(1, 0xFFFF);
}

void func_000909D8(void) {
    func_0009090C(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000909F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090A78);

void ***func_00090B04(void ***arg0, struct Unk_func_00090B04_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00090B04_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090B6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090BA8);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_2F3C4ED2);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090C18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090D58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090DEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090E68);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090EC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_952CE8AF);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090F90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090FB0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091020);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000912EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000915C8);

s32 func_0009166C(struct Unk_func_0009166C_0 *arg0) {
    return arg0->unk38 * (3 - arg0->unk1C);
}

void func_00091688(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091690);

void func_00091710(void) {
    func_00091690(1, 0xFFFF);
}

void func_00091730(void) {
    func_00091690(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091750);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000917B0);

void func_00091810(struct Unk_func_00091810_0 *arg0) {
    sceKernelDeleteSema(arg0->unk24);
}

void func_0009182C(struct Unk_func_0009182C_0 *arg0) {
    sceKernelDeleteSema(arg0->unk24);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091848);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000918E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091A64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091C48);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

s32 func_00091CF8(u32 arg0) {
    s32 cmp_tmp = arg0 > 0xFFFFU;
    return cmp_tmp == 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091D08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091D24);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091EC0);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF8toUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF16toUTF8);

s32 func_0009213C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E2118;
    D_000E2118 = arg0;
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_000E211C = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_000E2120 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_D4DAB044);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_15939BB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_8D736C8F);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenSJIS);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092298);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092328);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092398);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccJIStoUCS);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000924C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092598);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF16toSJIS);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009282C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC158);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000AC158(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_0010FCC8;
    D_0010FCC8 = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC168);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000AC168(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_0010FCCC;
    D_0010FCCC = arg0;
    return temp_v0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccIsValidUCS4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC178);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
u32 func_000AC178(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC184);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000AC184(u32 arg0) {
    s32 cmp_tmp = arg0 > 0xFFFFU;
    return cmp_tmp == 0;
}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC194);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC228);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC244);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00090810);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC274);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenUTF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccStrlenSJIS);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccDecodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccEncodeUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccDecodeUTF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC4CC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccDecodeSJIS);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC5B0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092B34);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092C04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092C4C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AC988);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ACA9C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccJIStoUCS);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ACB44);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF8toUTF16);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00091224);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000912FC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccSJIStoUTF16);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF16toSJIS);

INCLUDE_ASM("nonmatchings/pafmini_078748", sceCccUTF16toUTF8);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_B9383A25);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_F93D4E1F);

s32 func_000930BC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000930C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000930F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009312C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093164);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009319C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000931D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093280);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000932B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000932E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009331C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1B30);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093350);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093388);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000933BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000933F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093424);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093458);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093488);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000934BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000934F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093524);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093554);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093584);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000935B4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000935E4);
#else
s32 func_000935E4(struct Unk_func_000935E4_0 *arg0) {
    func_00095DE8(arg0->unk7C);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093604);

s32 func_0009362C(void) {
    return 1;
}

s32 func_00093634(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009363C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0009363C(struct Unk_func_0009363C_0 *arg0) {
    struct Unk_func_0009363C_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD88(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093668);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009369C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0009369C(struct Unk_func_0009369C_0 *arg0) {
    struct Unk_func_0009369C_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD90(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000936C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0) {
    void *temp_a0;

    temp_a0 = *arg0->unk7C;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD98)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_000936C8(struct Unk_func_000936C8_0 *arg0) {
    struct Unk_func_000936C8_temp_a0 *temp_a0;

    temp_a0 = *arg0->unk7C;
    temp_a0->unkD98(temp_a0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_60CBB63F);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_D6CDB3BB);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000939B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093A74);

s32 func_00093AD4(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00093AE4(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009246C);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_54AB18DD);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092680);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009269C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000926B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000926D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000926F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009270C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092728);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009273C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092748);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092754);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092768);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000927D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092858);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000928BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000928FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092928);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092A00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092ACC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092BA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092C7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092CA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092CC4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092CD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092D04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092D30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092D5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092D88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092DB0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092DD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092DF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092E0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092E38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092E64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092E90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092EBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092EE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092F08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00092FBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000930A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093154);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093240);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000932F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093348);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093B04);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB154);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB168);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB170);

INCLUDE_ASM("nonmatchings/pafmini_078748", scePaf_54AB18DD);

void func_00093DD4(void) {
    sceCccSetTable();
}

void func_00093DF0(void) {
    scePaf_D4DAB044();
}

void func_00093E0C(s32 arg0) {
    func_00091D08(arg0);
}

void func_00093E28(s32 arg0) {
    func_00092328(arg0 & 0xFFFF);
}

void func_00093E44(s32 arg0) {
    func_00093F58(arg0 & 0xFFFF);
}

void func_00093E60(s32 arg0) {
    func_00094E64(arg0 & 0xFFFF);
}

void func_00093E7C(s32 arg0) {
    func_000946B8(arg0 & 0xFFFF);
}

void func_00093E98(s32 arg0) {
    func_0009282C(arg0 & 0xFFFF);
}

void func_00093EB4(s32 arg0) {
    func_000943A8(arg0 & 0xFFFF);
}

void func_00093ED0(s32 arg0) {
    func_00095308(arg0 & 0xFFFF);
}

void func_00093EEC(s32 arg0) {
    func_00094B44(arg0 & 0xFFFF);
}

void func_00093F08(s32 arg0, s32 arg1) {
    D_000E214C = arg0;
    D_000E2148 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093F1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093F58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00093FC4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094040);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000940B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094174);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009424C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000942EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000943A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000943B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094434);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000944AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009455C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094594);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094640);

void func_00094668(s32 arg0, s32 arg1) {
    D_000E2158 = arg0;
    D_000E2154 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009467C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000946B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094720);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000947C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094854);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094910);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000949E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094A88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094B44);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094B54);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094BD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094C44);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094CF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094D2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094DDC);

void func_00094E14(s32 arg0, s32 arg1) {
    D_000E2164 = arg0;
    D_000E2160 = arg1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094E28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094E64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094EE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00094F88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095018);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000950D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000951AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009524C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095308);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095318);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095394);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095418);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000954C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095500);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000955B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000955E8);

void func_0009560C(s32 arg0, M2C_UNK arg1) {
    func_000955E8(0xD, arg0, arg1);
}

s32 func_00095630(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E216C.unk9C;
    D_000E216C.unk9C = arg0;
    return temp_v0;
}

void func_00095644(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000957DC(0xD, arg0, arg1, arg2);
}

void func_00095670(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095890(0xD, arg0, arg1, arg2);
}

void func_0009569C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095974(0xD, arg0, arg1, arg2);
}

void func_000956C8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00095A28(0xD, arg0, arg1, arg2);
}

void func_000956F4(s32 arg0, s32 arg1) {
    func_000955E8(0xE, arg0, arg1);
}

s32 func_00095718(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000E216C.unkA8;
    D_000E216C.unkA8 = arg0;
    return temp_v0;
}

void func_0009572C(s32 arg0, s32 arg1, s32 arg2) {
    func_000957DC(0xE, arg0, arg1, arg2);
}

void func_00095758(s32 arg0, s32 arg1, s32 arg2) {
    func_00095890(0xE, arg0, arg1, arg2);
}

void func_00095784(s32 arg0, s32 arg1, s32 arg2) {
    func_00095974(0xE, arg0, arg1, arg2);
}

void func_000957B0(s32 arg0, s32 arg1, s32 arg2) {
    func_00095A28(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000957DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095890);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095974);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095A28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095B14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095BCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095C1C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095C50);

s32 func_00095D98(struct Unk_func_00095D98_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk0;
    if (temp_v0 == 0) {

    } else {
        func_00095F78(temp_v0);
    }
    arg0->unk8(0, arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095DE8);

s32 func_00095E08(void **arg0) {
    struct Unk_func_00095E08_temp_a0 *temp_a0;

    temp_a0 = *arg0;
    temp_a0->unkF8(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095E30);

s32 func_00095E5C(void) {
    return 0;
}

s32 func_00095E64(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE01C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095E6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095F78);

s32 func_00095FC4(void) {
    return 0;
}

s32 func_00095FCC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00095FD4);

s32 func_00096160(s32 arg0) {
    func_000961AC(arg0 + 0x100);
    return 0;
}

s32 func_00096180(void) {
    return 0;
}

s32 func_00096188(struct Unk_func_00096188_0 *arg0) {
    arg0->unk60C = 0x80;
    arg0->unk604 = 0;
    arg0->unk600 = 0;
    arg0->unk608 = 0;
    return 0;
}

s32 func_000961A4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000961AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009621C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2920);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2AA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2B88);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE410);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009628C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096410);

s32 func_000964F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    func_0009716C(arg0, arg1, arg2, arg3);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 0xD0)(arg0, temp_v0);
        M2C_FIELD(arg0, s32 *, 0xDBC) = 0;
        M2C_FIELD(arg0, s32 *, 0xDC0) = 0;
    }
    D_000E2220 = (((s32) D_000E2220 ^ arg0) == 0) ? NULL : D_000E2220;
    return 0;
}
#endif

s32 func_00096554(void) {
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_000B2BF4(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xDBC);
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_000972A8((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_000972A8((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_000B2CB8(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE420);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE58C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE670);
#endif

#if FW_VERSION == 282
s32 func_0009655C(struct Unk_func_0009655C_0 *arg0) {
    void *temp_s0;

    temp_s0 = arg0->unkDBC;
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_000972A8((s32) temp_s0, 0x108, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    func_000972A8((s32) temp_s0, 0x1A, 0, 0, (s32) (arg0->unkDBC + 0x3C4));
    return 0;
}

s32 func_00096620(struct Unk_func_00096620_0 *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}
#endif

s32 func_00096654(void) {
    return 0;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE6DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE7C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AE7F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009665C);
#else
s32 func_0009665C(struct Unk_func_0009665C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 7;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000966A4);
#else
s32 func_000966A4(struct Unk_func_000966A4_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(arg0->unkDBC, s16 *, 0x3A) != 1;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000966EC);
#else
s32 func_000966EC(struct Unk_func_000966EC_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009671C);
#else
s32 func_0009671C(struct Unk_func_0009671C_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009674C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096834);

s32 func_00096888(void) {
    return 0;
}

s32 func_00096890(void) {
    return 0;
}

s32 func_00096898(void) {
    return 0;
}

s32 func_000968A0(void) {
    return 0;
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2F40);
#endif

#if FW_VERSION == 282
s32 func_000968A8(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000968B0);
#else
s32 func_000968B0(struct Unk_func_000968B0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000968E0);
#else
s32 func_000968E0(struct Unk_func_000968E0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096910);
#else
s32 func_00096910(struct Unk_func_00096910_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096940);
#else
s32 func_00096940(struct Unk_func_00096940_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096970);
#else
s32 func_00096970(struct Unk_func_00096970_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000969A0);
#else
s32 func_000969A0(struct Unk_func_000969A0_0 *arg0) {
    s32 temp_a0;

    temp_a0 = arg0->unkDBC;
    func_000972A8(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3068);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B310C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B329C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AEB68);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AEBE0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000969D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096A74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096C04);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096C4C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096E18);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB1EC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3540);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000D79EC);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5B6C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F3DAC);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5B2C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AEFEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF230);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00096EA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009716C);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000972A8);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB234);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000972F8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5B64);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001083A4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097348);
#else
s32 func_00097348(s32 arg0) {
    return (D_000E2220->unkE0(D_000E2220, arg0) == 0) ? 0 : -1;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097380);

s32 func_00097418(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = D_000E2220->unkEC(D_000E2220, arg0);
    D_000E2220->unkE4(D_000E2220, arg0, arg1, arg2, 1);
    return D_000E2220->unkEC(D_000E2220, arg0) - temp_s4;
}

s32 func_000974AC(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < (s32) arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF50C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s16 func_000B3C58(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_000B3C80(s32 arg0, s32 arg1) {
    func_000B3C9C(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3C9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3CD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3D20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3D68);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3D88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3E04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3E28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3EF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B3FD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4038);

void func_000B4274(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_000B4038(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B42AC);

void func_000B43FC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_000B42AC((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4424);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4494);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B44EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4540);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B46E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4758);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4788);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4954);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF598);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF5F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF630);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF6B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF748);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF7DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF820);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF91C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AF958);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFA1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFADC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFB98);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFC80);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AFD50);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0140);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B019C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B03DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B04A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0530);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B05F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B08F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0994);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0A08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0CC4);
#endif

#if FW_VERSION == 282
s32 func_0009754C(void *arg0, void *arg1, u32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite((u32) temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= (s32) arg2) ? 0 : -1;
}

s16 func_000975C4(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_000975EC(s32 arg0, s32 arg1) {
    func_00097608(arg0, arg1, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097608);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097644);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009768C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000976D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000976F4);

void func_00097770(s32 arg0, M2C_UNK arg1) {
    func_000976F4(4, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097794);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009785C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097940);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000979A4);

void func_00097BE0(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_000979A4(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097C18);

void func_00097D68(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_00097C18((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097D90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097E00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097E58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00097EAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098054);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000980C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000980F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000982C0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098308);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098334);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00098334(void) {
    func_000B5228();
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B49E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4ADC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4B14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4C2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4C6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4CB4);

void func_000B51D8(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B51E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5228);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B52AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5440);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B54A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5530);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5578);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B55E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5890);

s32 func_000B58E0(s32 arg0, s32 arg1, s32 arg2) {
    return ~func_000B5890(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5900);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5A08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5B0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5B2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B66C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6840);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B68EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6A3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6B30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6BE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6CEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6D5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6DE8);
#endif

#if FW_VERSION == 282
s32 func_00098334(void) {
    func_00098B94();
    return 0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0DB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0F74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B0FC4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B119C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1200);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B12C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1B88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1BA4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098354);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098448);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098480);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098598);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000985D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098620);

void func_00098B44(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098B4C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098B94);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1CEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B1F74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2028);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B210C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B21AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2240);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B231C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B26B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2758);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B279C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B29C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2BEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B2C58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4294);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4448);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B45A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B478C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B48C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4988);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4B14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4BB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4C7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098C18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098DAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098E0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098E9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098EE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00098F54);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000991FC);

s32 func_0009924C(void) {
    return ~func_000991FC();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009926C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00099374);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00099478);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_00099498);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A034);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A1AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A258);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A3A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A49C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A550);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A658);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A6C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A754);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB26C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB27C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5B94);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001083D4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_001084D0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB29C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3A4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3A8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F5CA8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3B0);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3B8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3C4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB3C8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB408);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6F7C);

void func_000B7368(void) {
    M2C_VFIELD(&D_00122258, s8, 0x41C2) = 0;
    M2C_VFIELD(&D_00122258, s16, 0xDE) = 0;
    M2C_VFIELD(&D_00122258, s16, 0xDC) = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7424);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B747C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B74D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B760C);

void func_000B763C(void) {
    M2C_VFIELD(&D_00122258, s8, 0x4110) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410F) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410E) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410D) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x410C) = 0;
    M2C_VFIELD(&D_00122258, s8, 0x4111) = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7660);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7724);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B77A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B781C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B78AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B79C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7A34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7A70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7B4C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7E08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7ED8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7F6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7FA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8384);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B840C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8484);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B84E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B85F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8720);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8780);

void func_000B8808(void) {
    M2C_VFIELD(&D_00122258, s16, 0xD8) = -1;
    M2C_VFIELD(&D_00122258, s16, 0x100) = -1;
    M2C_VFIELD(&D_00122258, s16, 0xE2) = -1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8824);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8A14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8B24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8B80);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8BDC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8C78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8CD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8D30);

s32 func_000B8D8C(void) {
    s32 temp_v0;

    temp_v0 = func_000B5578((s32) &D_00122258, (s32) &D_0012A264, M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_00122258, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8DF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8E3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8FD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B925C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B92C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B94C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B950C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B95CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9628);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9694);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B974C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B98FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9BC0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9C70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9D18);

s32 func_000B9D88(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_000B9C70() != -1) {
        var_s0 = 0;
        func_000B950C(0, (s32) &D_001263D6);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9DCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9E80);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9FB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA130);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA188);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA1DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA290);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA300);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA46C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA690);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA7B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA88C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BAC94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BAE30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BAF84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB004);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB0EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB19C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB26C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB308);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB3D4);

void func_000BB434(s32 arg0) {
    func_000B3D68(arg0, 0x24);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB450);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB53C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB5EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB668);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB6D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB734);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB94C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBB14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBB74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBC44);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBD90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBE9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBFD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC17C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC37C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC3D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC85C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BCFA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BD238);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BD3A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BDC74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BDCBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BDE3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BDFB8);

void func_000BE00C(s16 arg0, s16 arg1, s16 arg2) {
    D_00126352 = 3;
    func_000BE0C8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000BE048(s16 arg0, s16 arg1, s16 arg2) {
    D_00126352 = 7;
    func_000BE0C8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000BE084(s16 arg0, s16 arg1, s16 arg2) {
    M2C_VFIELD(&D_00122258, s16, 0x40FA) = 5;
    M2C_VFIELD(&D_00122258, s16, 0x42BE) = 0;
    func_000BE0C8(2, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE0C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE2F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE48C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE590);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE910);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BECB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF018);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF0CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF444);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF678);

void func_000BF800(s32 arg0) {
    func_000BF81C(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF81C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF8B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFFD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0174);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0248);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C033C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0500);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0800);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C089C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0964);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0A84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0B78);

s32 func_000C0C84(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_000C0CCC(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0CF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0E04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1098);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C11AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1268);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C13E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1674);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C18B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1934);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1D08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1DC4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C034C);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C204C_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2190);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2310);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C24EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C251C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C260C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C264C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B4EAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5444);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5478);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B555C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B55D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5670);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5828);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B586C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B58B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B59A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5A80);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5B50);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5C50);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5E20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5EA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B5F2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6104);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B6580);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B66EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B67F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B688C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B701C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B70DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B718C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7250);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7434);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B758C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7608);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7700);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7740);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7A00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7BA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7C38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7CDC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7DD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7E6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7F04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B7FA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8040);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B80B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8330);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8704);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8798);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8A98);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8B14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8C40);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8CE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8D78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B8EB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9130);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9564);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9670);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9728);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B97E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9840);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9934);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9AD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9D00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9DB0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9E24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9F3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000B9FFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA1A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA504);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA6DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BA810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BAF0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB1A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB3D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB470);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB5D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB6C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB814);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BB92C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBA24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBAF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBB28);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBCE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBDBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBEB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BBFB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC0C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC398);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC610);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC69C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC7C0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BC9B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BCB20);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BCCE0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BCF0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BD224);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BD2E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BD980);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE48C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BE7C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BEA34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF6A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF74C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BF99C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFBFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFC6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFCD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFD34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000BFDA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C00DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C02C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C04E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C09E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C0EF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1434);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1548);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1A88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C1DE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C20A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C20D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C21BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2C1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2EC0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3014);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3194);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3440);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C382C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3904);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C39D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3B88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3CB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3E1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3E9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3F0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4080);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4494);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4668);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4780);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C49D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4A78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4E34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C51F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C52E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5914);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C59D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5DB0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5FD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C61C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6260);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6530);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C65BC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C672C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C67B8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009A8E8);

void func_0009ACD4(void) {
    D_00106F70.unk41C2 = 0;
    D_00106F70.unkDE = 0;
    D_00106F70.unkDC = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009ACEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009AD90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009ADE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009AE3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009AF78);

void func_0009AFA8(void) {
    D_00106F70.unk4110 = 0;
    D_00106F70.unk410F = 0;
    D_00106F70.unk410E = 0;
    D_00106F70.unk410D = 0;
    D_00106F70.unk410C = 0;
    D_00106F70.unk4111 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009AFCC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B090);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B110);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B188);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B218);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B32C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B3A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B3DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B4B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B774);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B844);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B8D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009B910);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009BCF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009BD78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009BDF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009BE54);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009BF64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C08C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C0EC);

void func_0009C174(void) {
    D_00106F70.unkD8 = -1;
    D_00106F70.unk100 = -1;
    D_00106F70.unkE2 = -1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C190);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C380);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C490);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C4EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C548);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C5E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C640);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C69C);

s32 func_0009C6F8(void) {
    s32 temp_v0;

    temp_v0 = func_00098EE4((s32) &D_00106F70, (s32) &D_0010EF7C, D_00106F70.unk14->unk14, (s32) (s16) (D_00106F70.unk14->unk26 * (D_00106F70.unk14->unk2C + 1)));
    D_00106F70.unkCC = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C75C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C7A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009C93C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CBC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CC34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CE2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CE78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CF38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009CF94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D000);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D0B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D268);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D52C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D5DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D684);

s32 func_0009D6F4(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0009D5DC() != -1) {
        var_s0 = 0;
        func_0009CE78(0, (s32) &D_0010B0EE);
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D738);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D7EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009D920);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DA9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DAF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DB48);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DBFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DC6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DDD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009DFFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E124);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E1F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E600);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E79C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E8F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009E970);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EA58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EB08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EBD8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EC74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009ED40);

void func_0009EDA0(s32 arg0) {
    func_000976D4(arg0, 0x24);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EDBC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EEA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EF58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009EFD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F040);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F0A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F2B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F480);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F4E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F5B0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F6FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F808);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009F944);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FAE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FCE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_0009FD40);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A01C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A090C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0BA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A0D14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A15E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1628);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A17A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1924);

void func_000A1978(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 3;
    func_000A1A34(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000A19B4(s16 arg0, s16 arg1, s16 arg2) {
    D_0010B06A = 7;
    func_000A1A34(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_000A19F0(s16 arg0, s16 arg1, s16 arg2) {
    D_00106F70.unk40FA = 5;
    D_00106F70.unk42BE = 0;
    func_000A1A34(2, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1A34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1C60);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1DF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A1EFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A227C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2624);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2984);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2A38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2DB0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A2FE4);

void func_000A316C(s32 arg0) {
    func_000A3188(arg0, 0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3188);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3224);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A393C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3AE0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3BB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3CA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A3E6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A416C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4208);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A42D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A43F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A44E4);

s32 func_000A45F0(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_000A4638(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4660);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4770);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4A04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4B18);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4BD4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4CEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4D50);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A4FE0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A521C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A52A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5674);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5730);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A59B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5AFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5C7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5CEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5E58);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5E88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5F78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A5FB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A60AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000A60AC(void) {
    func_000B3D68((s32) &D_00123418, 0x14);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2764);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C27A4);

s32 func_000C27F0(void) {
    s32 temp_v0;

    func_000C2A24();
    temp_v0 = func_000C2828();
    func_000C2B14(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2828);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2A24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2B14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2B74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2C38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2D50);

void func_000C2EA4(s16 arg0) {
    func_000C2764();
    if (arg0 == 0) {
        func_000C2EE8();
    } else {
        func_000C300C();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C2EE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C300C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C311C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C318C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3204);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3340);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C3BEC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4494);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4574);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C497C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4CF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C4D78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C512C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5164);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C51A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C52DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C540C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5588);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C55C0);
#endif

#if FW_VERSION == 282
void func_000A60AC(void) {
    func_000976D4((s32) &D_00108130, 0x14);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C693C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6988);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C69E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6A2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6D48);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6EA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6F4C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C70AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7248);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7408);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C745C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C75EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C77A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C78A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7924);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7B34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8904);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C9650);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C9788);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C9DC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CA328);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CA3E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CA94C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CA9C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CAA64);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CAC78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CAE5C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB0A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB114);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A60D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6110);

s32 func_000A615C(void) {
    s32 temp_v0;

    func_000A6390();
    temp_v0 = func_000A6194();
    func_000A6480(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6194);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6390);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6480);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A64E0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A65A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A66BC);

void func_000A6810(s16 arg0) {
    func_000A60D0();
    if (arg0 == 0) {
        func_000A6854();
    } else {
        func_000A6978();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6854);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6978);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6A88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6AF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6B70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A6CAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A7558);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A7E00);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A7EE0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A82E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A865C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A86E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8A98);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8AD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8B0C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8C48);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8D78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8EF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8F2C);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB8A0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB8A8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB8DC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F620C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB914);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB920);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F6250);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB958);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB964);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB988);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB994);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB99C);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB9B0);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB9C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F62C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_00108B04);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB9CC);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB9D4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DB9F4);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DBBE8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DBDDC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DC1C4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F7A58);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010A298);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DD160);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE3C4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_0010B9A8);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8B8);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8C0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F91C0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8C8);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8D0);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000F91DC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8E4);
#endif

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE8EC);

INCLUDE_RODATA("nonmatchings/pafmini_078748", D_000DE928);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C560C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C56F0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5734);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C57A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5810);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5880);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C592C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5A70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5B38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5B90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5D2C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5D98);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C5FAC);

void func_000C60B8(void) {
    M2C_FIELD(D_00123D14, u16 *, 8) = (u16) M2C_FIELD(D_00123D14, u16 *, 4);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C60CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6124);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C61B4);

void func_000C622C(void) {
    M2C_VFIELD(&D_00122258, s8, 0x417E) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3E88) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3E86) = 0;
    M2C_VFIELD(&D_00122258, s16, 0x3F76) = 0;
    func_000C62A8();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6260);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C62A8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB180);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB2A8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB320);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB3C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB474);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB520);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB658);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB7E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB8C4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CB934);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CBB7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CBC14);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CBF78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC178);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC1AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC220);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC2D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC364);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC3AC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC3F4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC418);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC444);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC4B4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC5CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC744);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC7C8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC83C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC894);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC8EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CC990);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCAB8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCB60);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCBF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCC9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCCF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A8F78);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A905C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A90A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A910C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A917C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A91EC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9298);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A93DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A94A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A94FC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9698);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9704);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9918);

void func_000A9A24(void) {
    D_00108A2C->unk8 = (u16) D_00108A2C->unk4;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9A38);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9A90);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9B20);

void func_000A9B98(void) {
    D_00106F70.unk417E = 0;
    D_00106F70.unk3E88 = 0;
    D_00106F70.unk3E86 = 0;
    D_00106F70.unk3F76 = 0;
    func_000A9C14();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9BCC);

void func_000A9C14(void) {
    D_0010DD08 = 0;
}
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9C20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C62D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6308);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6388);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C647C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C64D0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6538);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6578);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C65B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6620);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C66B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6728);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6798);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C67FC);

s32 func_000C683C(void) {
    return ((D_0012643C ^ 2) == 0) ? 0 : -1;
}

void func_000C6854(void) {

}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C685C);
#endif

#if FW_VERSION == 282
void func_000A9C20(void) {
    func_000AEF78();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCD54);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9C3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9C74);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9CF4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9DE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9E3C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9EA4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9EE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9F24);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000A9F8C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA024);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA094);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA104);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA168);

s32 func_000AA1A8(void) {
    return ((D_0010B154 ^ 2) == 0) ? 0 : -1;
}

void func_000AA1C0(void) {
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA1C8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA284);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AA284(void) {
    M2C_VFIELD(&D_00122258, u16, 0x18D0) = (u16) M2C_FIELD(M2C_FIELD(&D_00122258, void **, 0x1ABC), u16 *, 2);
    func_000C6D70();
    func_000C69CC();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C694C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C69CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6A9C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6AF0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6B30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6BE8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6C94);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6D34);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6D70);
#endif

#if FW_VERSION == 282
void func_000AA284(void) {
    D_00106F70.unk18D0 = (u16) D_00106F70.unk1ABC->unk2;
    func_000AA6DC();
    func_000AA338();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCED4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CCFA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD0A4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD124);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD198);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD2D8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD3F8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD4B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD51C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA2B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA338);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA408);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA45C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA49C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA554);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA600);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA6A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA6DC);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA78C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000C6E3C(void) {
    switch (D_00123B26) {                           /* irregular */
    default:
        func_000C6FDC();
        break;
    case -1:
        func_000AACA4();
        func_000AAB08();
        break;
    case -2:
        func_000C6F64();
        break;
    case 273:
    case 278:
    case 280:
        func_000AACA4();
        func_000AAB34();
        break;
    }
}

void func_000C6ED8(void) {
    if (D_00123B26 != -1) {
        if (D_00123B26 != -2) {
            func_000AAB34();
        } else {
            func_000AA924();
        }
    } else {
        func_000AAB08();
    }
}

void func_000C6F30(void) {
    if (func_000AAAEC() != 0) {

    } else {
        func_000C6F64();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6F64);
#endif

#if FW_VERSION == 282
void func_000AA78C(void) {
    func_000AA8D0();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD644);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD72C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD7A0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD7E4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA7A8);

void func_000AA844(void) {
    if (D_0010883E != -1) {
        if (D_0010883E != -2) {
            func_000AAB34();
        } else {
            func_000AA924();
        }
    } else {
        func_000AAB08();
    }
}

void func_000AA89C(void) {
    if (func_000AAAEC() != 0) {

    } else {
        func_000AA8D0();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA8D0);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA924);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C6FDC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CD88C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AA948);
#endif

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAAEC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAB08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AAB08(void) {
    func_000C735C();
    func_000C7448();
    func_000C7404();
}
#endif

#if FW_VERSION == 282
void func_000AAB08(void) {
    func_000AACC8();
    func_000AADB4();
    func_000AAD70();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAB34);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AAB34(void) {
    func_000C735C();
    func_000C6FDC();
    func_000C7404();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C71F4);

void func_000C7290(s16 arg0) {
    D_0012644C = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C729C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C72E0);
#endif

#if FW_VERSION == 282
void func_000AAB34(void) {
    func_000AACC8();
    func_000AA948();
    func_000AAD70();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDB6C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDCA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDCD0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDD4C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAB60);

void func_000AABFC(s16 arg0) {
    D_0010B164 = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAC08);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAC4C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AACA4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AACA4(void) {
    func_000C7A70();
    func_000C7B20();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C735C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7404);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7448);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C749C);
#endif

#if FW_VERSION == 282
void func_000AACA4(void) {
    func_000AB3DC();
    func_000AB48C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDE30);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDEFC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDF84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CDFF4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AACC8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAD70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AADB4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAE08);
#else
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAE94);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7544);
#endif

#if FW_VERSION == 282
void func_000AAE94(void) {
    func_000AB4E8();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CE0C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAEB0);

void func_000AAF54(void) {
    func_000AAEB0(0);
}

void func_000AAF70(void) {
    func_000AAEB0(1);
}

void func_000AAF8C(s16 arg0) {
    func_000AD064(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAFA8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AAFF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB030);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB068);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB068(void) {
    func_000C7544(0);
}
#endif

#if FW_VERSION == 282
void func_000AB068(void) {
    func_000AD1C0(0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB084);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000AB084(void) {
    func_000C7544(1);
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7620);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C763C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C768C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C76C4);

void func_000C76FC(void) {
    func_000C9854(0);
}

void func_000C7718(void) {
    func_000C9854(1);
}
#endif

#if FW_VERSION == 282
void func_000AB084(void) {
    func_000AD1C0(1);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CE210);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CE248);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB0A0);
#endif

#if FW_VERSION == 282
void func_000AB0A0(void) {
    struct Unk_func_000AB0A0_temp_s0 *temp_s0;

    temp_s0 = D_00108A2C;
    temp_s0->unk28 = func_000AB0D4(temp_s0->unk2C, (s32) temp_s0->unk4);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000CE2F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_000CE2F4(void) {
    void *temp_s0;

    temp_s0 = D_00123D14;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_000C7768(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7768);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C79B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7A1C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7A70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7B20);

void func_000C7B6C(s16 arg0) {
    M2C_FIELD(D_00123D14, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7B7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7DA0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7DF8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7E7C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C7F60);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C802C);

void func_000C80F8(s16 arg0) {
    func_000C811C((s32) arg0);
    func_000D1EA4();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C811C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8218);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8378);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8440);

void func_000C84A4(void) {
    if (func_000C8440((s32) M2C_FIELD(D_00123D14, s16 *, 4)) != -1) {
        func_000CCDB4();
        func_000D1EA4();
    }
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C84E4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C850C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C863C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8744);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C88B8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8914);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8AC0);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8B04);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8B48);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8C70);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8D84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C8FAC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C9334);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000C9458);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB0D4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB324);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB388);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB3DC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB48C);

void func_000AB4D8(s16 arg0) {
    D_00108A2C->unk3C = arg0;
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB4E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB70C);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB764);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB7E8);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB8CC);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000AB998);

void func_000ABA64(s16 arg0) {
    func_000ABA88(arg0);
    func_000B5810();
}

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ABA88);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ABB84);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ABCE4);

INCLUDE_ASM("nonmatchings/pafmini_078748", func_000ABDAC);

void func_000ABE10(void) {
    if (func_000ABDAC((s32) M2C_FIELD(D_00108A2C, s16 *, 4)) != -1) {
        func_000B0720();
        func_000B5810();
    }
}
#endif
