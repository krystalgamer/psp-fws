#include "common.h"
#include "paf_decls.h"

s32 func_00095A44(s32 arg0, s32 arg1) {
    return (s32) ((arg0 + arg1) - 1) / arg1;
}

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095A64);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095A84);

void func_00095AF4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    scePaf_F95EA3F1(arg1, arg0, arg2 << 7);
}

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095B1C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EAC0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EB38_v100);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EB7C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EBA8);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095B3C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00091000);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091118);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000913F0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EC24);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EC44);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004ECAC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004EFB8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00095B8C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095CA4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095F7C);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096224);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009187C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091998);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091A4C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091B78);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091C24);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091D88);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00091DF0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_095A44", func_0004F1C8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004F424);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004F57C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004FDC0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004FF48);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0005007C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000501BC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0005023C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0005026C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000502D8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00096408);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096524);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000965D8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096708);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000967B8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096920);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009698C);
#endif

void func_00096A24(void) {
}

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191340);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191380);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001913C0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001913D8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191414);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191434);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019145C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191478);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191498);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001914B8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001914E0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191500);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191518);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191530);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191544);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191584);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001915B4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001915D0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001915F4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019162C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191664);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019167C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019169C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001916C8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191718);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191734);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191760);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019177C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001917A4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001917CC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001917F4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191808);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191820);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191834);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191848);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191870);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191888);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019189C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001918C0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001918D8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191908);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191930);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191954);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191978);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001919A8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001919BC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001919D8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191A18);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191A40);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191A68);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191A7C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191AAC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191AC8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191AF0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191B14);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191B40);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191B6C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191B8C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191BBC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191BE4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191C0C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191C3C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191C6C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191C98);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191CC8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191CF4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191D18);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191D38);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191D58);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191D90);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_0018C358);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191DBC);
#endif

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191DDC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E00);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E28);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E40);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_0018C3F0);
#endif

#if FW_VERSION < 270 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E54);
#endif

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E78);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191E88);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191EC8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191F0C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191F38);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191F64);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191F8C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191FA8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191FD4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00191FF0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192004);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019201C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019202C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192054);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019208C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001920C8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001920F8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019211C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192144);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192160);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192188);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001921AC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001921C4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001921E8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192210);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192218);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192254);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192290);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001922B0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001922C0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001922E0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192300);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192320);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019233C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192358);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019239C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001923D8);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192410);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192444);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192458);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192470);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192498);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001924DC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192518);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019254C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192570);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001925A0);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001925BC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_001925F4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192620);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019264C);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_095A44", D_0018B184);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0018B1F4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0018B214);
#endif

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192840);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192848);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192850);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192950);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_0019295C);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00091E90);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00186BFC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00186C7C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092154);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000923DC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000925B4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009279C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092888);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092A8C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092D54);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092DB0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00092DF4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093044);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093128);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000932F0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000933D8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093574);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093694);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000939F4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093B54);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093BBC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093D0C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093D5C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093D7C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00093DE4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000940F8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00094100);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00094308);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00094564);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000946BC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0004FDC0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095088);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000951BC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000952FC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009537C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000953AC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095418);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00095580);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00096A2C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192ACC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192B4C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096CF0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096F78);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00097150);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00097338);

INCLUDE_ASM("nonmatchings/paf_095A44", start_pass_huff);

INCLUDE_ASM("nonmatchings/paf_095A44", jpeg_make_c_derived_tbl);

INCLUDE_ASM("nonmatchings/paf_095A44", jchuff_dump_buffer);

s32 jchuff_flush_bits(struct Unk_jchuff_flush_bits_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (jchuff_emit_bits(arg0, 0x7F, 7) != 0) {
        var_v1 = 1;
        arg0->unk8 = 0;
        arg0->unkC = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/paf_095A44", encode_one_block);

INCLUDE_ASM("nonmatchings/paf_095A44", jchuff_emit_restart);

INCLUDE_ASM("nonmatchings/paf_095A44", encode_mcu_huff);

INCLUDE_ASM("nonmatchings/paf_095A44", finish_pass_huff);

INCLUDE_ASM("nonmatchings/paf_095A44", htest_one_block);

INCLUDE_ASM("nonmatchings/paf_095A44", encode_mcu_gather);

INCLUDE_ASM("nonmatchings/paf_095A44", jpeg_gen_optimal_table);

INCLUDE_ASM("nonmatchings/paf_095A44", finish_pass_gather);

INCLUDE_ASM("nonmatchings/paf_095A44", jinit_huff_encoder);

INCLUDE_ASM("nonmatchings/paf_095A44", jchuff_emit_bits);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000988A4);

void func_000988F4(struct Unk_func_000988F4_0 *arg0) {
    arg0->unk90 = 0;
    func_000988A4();
}

INCLUDE_ASM("nonmatchings/paf_095A44", func_00098914);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009897C);

s32 func_00098C90(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/paf_095A44", func_00098C98);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00098EA0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000990FC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099254);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099A98);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099C20);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099D54);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099E98);

void func_00099F18(struct Unk_func_00099F18_0 *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00095A84(*arg1, arg2, arg3, 0, arg4, arg0->unk6C);
}

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099F48);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00099FB4);

void func_0009A120(void) {
}
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A128);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A330);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A5FC);

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_095A44", func_000509E4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00050B8C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00050F28);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000510C8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00051218);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000512C0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_000517D0);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0005183C);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A6C4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A7E8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009A940);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009AA5C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009AB30);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009ABC8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009AC98);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009AE9C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009AED4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192B90);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C10);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00096498);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096698);

INCLUDE_ASM("nonmatchings/paf_095A44", func_00096908);
#endif

#if FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_095A44", D_00128AFC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00128B3C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009B038);

INCLUDE_ASM("nonmatchings/paf_095A44", jpeg_fdct_ifast);

INCLUDE_ASM("nonmatchings/paf_095A44", jpeg_fdct_islow);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009B840);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009BC60);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009C0F8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009C6F4);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CB0C);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CDAC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C50);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C6C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C74);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C7C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C84);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C8C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C94);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192C9C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CA4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CAC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CBC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CC4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CD4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CDC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CE4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CEC);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192CF4);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D04);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D0C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D14);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D30);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D4C);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D68);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192D84);

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192DA0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", scePaf_1A1F232F);
#else
void scePaf_1A1F232F(struct Unk_scePaf_1A1F232F_0 *arg0, s32 arg1) {
    if (arg1 < 9) {

    } else {
        scePaf_7894B61F((s32) arg0, (s32) "Too many bytes for PNG signature.");
    }
    arg0->unk4EC = __builtin_allegrex_max(arg1, 0);
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CE3C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_001147F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CE3C);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/paf_095A44", D_00128D1C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CE3C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192DE0);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CEF4);

void func_0009CF74(void) {
    func_0009EA54();
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CF90);
#else
void func_0009CF90(struct Unk_func_0009CF90_0 *arg0) {
    arg0->unk4D0 = crc32(0, 0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009CFC4);

INCLUDE_ASM("nonmatchings/paf_095A44", scePaf_7AFD6B74);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_00053B5C);
#else
INCLUDE_ASM("nonmatchings/paf_095A44", png_info_init);
#endif

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009D0FC);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009D1B8);

INCLUDE_ASM("nonmatchings/paf_095A44", func_0009D648);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_095A44", func_0009D6AC);
#else
M2C_UNK *func_0009D6AC(void) {
    return "\n libpng version 1.2.10 - April 23, 2006\n   Copyright (c) 1998-2006 Glenn Randers-Pehrson\n   Copyright (c) 1996-1997 Andreas Dilger\n   Copyright (c) 1995-1996 Guy Eric Schalnat, Group 42, Inc.\n";
}
#endif

M2C_UNK *func_0009D6B8(void) {
    return &D_00192EFC;
}

M2C_UNK *func_0009D6C4(void) {
    return &D_00192EFC;
}

INCLUDE_RODATA("nonmatchings/paf_095A44", D_00192EFC);
