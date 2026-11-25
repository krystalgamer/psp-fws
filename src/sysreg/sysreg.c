/* cflags: -O2 -frename-registers */
#include "common.h"
#include "sysreg_decls.h"

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", module_start);
#else
s32 module_start(void) {
    sceSysEventForKernel_D7D3FDCD(&D_000025C0);
    sceSysreg_driver_25673620();
    sceSysreg_driver_BB3623DF();
    sceSysEventForKernel_CD9E4BB5(&D_000025C0);
    return 0;
}
#endif

s32 module_reboot_before(void) {
    sceSysreg_driver_4EE8E2C8();
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9C863542);

s32 sceSysreg_driver_F2DEAA14(void) {
    sceSysreg_driver_4EE8E2C8();
    return 0;
}

s32 func_000000B4(void) {
    return 0;
}

s32 func_000000BC(void) {
    return 0;
}

s32 func_000000C4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_CD0F6715);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F3443B9A);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E2A5D1EE);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E88B77ED);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_312F9419);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_844AF6BD);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4F46EEDE);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8F4F4E96);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_C29D614E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DC6139A4);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DE59DACB);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2DB0EB28);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_26283A6F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A374195E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D20581EA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7558064A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9BB70D34);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_FD6C562B);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_CD4FB614);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_69EECBE5);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F5B80837);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8075303F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_00C2628E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_EC4BF81F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8A7F9EB4);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_C32F2491);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A23BC2C4);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F5EA8570);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_3E961C02);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_ACFA3764);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00000588);
#endif

INCLUDE_RODATA("nonmatchings/sysreg", D_00002520);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_53A6838B);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B04);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BB3623DF);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DCA57573);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_53A6838B);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BB3623DF);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B21B6CBF);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B4560C45);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DCA57573);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_44F6CDA7);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_158AD4FC);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4D4CE2B8);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_789BD609);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_391CE1C0);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_82D35024);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_AF904657);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_438AECE9);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_678AD3ED);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_168C09B8);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7E7EBC20);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A265C719);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4F5AFBBE);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_845DD1A6);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_16909002);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B6C10DF0);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_3E216017);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BFBABB63);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4716E71E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_826430C0);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7CC6CBFD);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_EE6B9411);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F97D9D73);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2D0F7755);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_63B9EB65);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E1AA9788);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_AA63C8BD);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_054AC8C6);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E45BED6A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_681B35C4);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E321F41A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4D2FFC60);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00000B64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_6B01D71B);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_FC186A83);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B59DB832);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9155812C);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DA4FCA1D);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_228A73E1);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_31154490);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8E2D835D);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", func_00000C58);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_6B01D71B);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_FC186A83);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B59DB832);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9155812C);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DA4FCA1D);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_228A73E1);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_31154490);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8E2D835D);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7234EA80);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_38EC3281);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8835D1E1);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8B90B8B5);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7725CA08);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A3E4154C);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E8533DCA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F6D83AD0);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A9CD1C1F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2F216F38);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A24C242A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E89243BE);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7DCA8302);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_45225F8F);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D74D3AB6);
#else
s32 sceSysreg_driver_D74D3AB6(void) {
    return 0x80000004;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_AD7C4ACB);
#else
s32 sceSysreg_driver_AD7C4ACB(void) {
    return 0x80000004;
}
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DC68A93F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_94B0323C);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_6417CDD6);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_20388C9E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_E3AECFFA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_3BBD0C0C);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_C1DA05D2);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_DE170397);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7234EA80);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_38EC3281);
#else
INCLUDE_ASM("nonmatchings/sysreg", func_00001104);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_1969E840);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_1D382514);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_03340297);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9100B4E5);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_0A83FC7B);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D6628A48);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_1E18EA43);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_833E6FB1);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8CE2F97A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_0A83FC7B);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9DD1F821);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_1C4C4C7A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BC68D9B6);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A3C8E075);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_79338EA3);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_CADB92AA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D74F1D48);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_18172C6A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_63B1AADF);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F74F14E9);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BB26CF1F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8E2FB536);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_0436B60F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_58F47EFD);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_4C49A8BC);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_26FA0928);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F844DDF3);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_29A119A1);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_77DED992);
#else
s32 sceSysreg_driver_77DED992(void) {
    return 0x80000004;
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_6879790B);
#else
s32 sceSysreg_driver_6879790B(void) {
    return 0x80000004;
}
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7A5D2D15);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_25B0AC52);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8B95C17F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_CCF911C0);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7FD7A631);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BB823481);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8C5C53DE);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A16E55F4);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_B627582E);
#else
void sceSysreg_driver_B627582E(s32 arg0) {
    func_00001A68(arg0, 1);
}
#endif

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_1E9C3607);
#else
void sceSysreg_driver_1E9C3607(s32 arg0) {
    func_00001A68(arg0, 0);
}

INCLUDE_ASM("nonmatchings/sysreg", func_00001A68);

INCLUDE_ASM("nonmatchings/sysreg", func_00001AF8);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_55B18B84);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_2112E686);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/sysreg", func_00001BF4);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7B9E9A53);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7BDF0556);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8D0FED1E);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_A46E9CA8);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_633595F2);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_32471457);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_692F31FF);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_FFEB6E00);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_87C2BA20);
#endif

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D43E98F6);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BF91FBDA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_36A75390);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_633595F2);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_32471457);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_692F31FF);
#endif

#if FW_VERSION < 271
s32 sceSysreg_driver_692F31FF(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;

    temp_a0 = sceKernelCpuSuspendIntr();
    temp_s0 = __builtin_allegrex_ext(*(s32 *)0xBC100080, 1, 4);
    *(s32 *)0xBC100080 = (arg0 & temp_s0) * 2;
    sceKernelCpuResumeIntrWithSync(temp_a0);
    return temp_s0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_FFEB6E00);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_87C2BA20);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_D43E98F6);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_BF91FBDA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_36A75390);
#endif

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_61BFF85F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_9FC87ED4);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_8BE2D520);

INCLUDE_ASM("nonmatchings/sysreg", func_00001814);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_3EA188AD);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B04);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/sysreg", D_00002BFC);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/sysreg", D_00002B78_v250);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/sysreg", D_00002538);

INCLUDE_RODATA("nonmatchings/sysreg", D_00002578);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_25673620);
#else
s32 sceSysreg_driver_25673620(void) {
    InterruptManagerForKernel_58DD8978(0x1F, 1, &func_00001814, 0, &D_00002BD0);
    InterruptManagerForKernel_4D6E7305(0x1F);
    return 0;
}
#endif

s32 sceSysreg_driver_4EE8E2C8(void) {
    InterruptManagerForKernel_F987B1F0(0x1F);
    return 0;
}

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_083F56E2);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_7C5B543C);

INCLUDE_ASM("nonmatchings/sysreg", func_00001AC8);

INCLUDE_ASM("nonmatchings/sysreg", func_00001AE8);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B0C);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B44);

INCLUDE_ASM("nonmatchings/sysreg", func_00001B60);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_5664F8B5);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_44704E1D);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_584AD989);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_377F035F);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_AB3185FD);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_0EA487FA);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_136E8F5A);

INCLUDE_ASM("nonmatchings/sysreg", sceSysreg_driver_F4811E00);
