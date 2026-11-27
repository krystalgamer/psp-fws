/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024250);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024250(s32 arg0, s32 arg1) {
    func_000240CC(func_00023864(), arg0, arg1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024290);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00024290(void *arg0, u32 arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceIoOpen(func_00023864(), 1, 0);
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = sceIoIoctl(temp_v0, 0x02125803, NULL, 0U, arg0, arg1);
        sceIoClose(temp_v0);
    }
    return var_s2;
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024318);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00024318(void) {
    void *sp0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 1;
    temp_v0 = sceIoOpen(func_00023864(), 1, 0);
    if (temp_v0 >= 0) {
        if (sceIoIoctl(temp_v0, 0x02125008, NULL, 0U, &sp0, 4U) == 0) {
            var_s1 = sp0 == 0;
        }
        sceIoClose(temp_v0);
    }
    return var_s1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002439C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002444C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002461C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024710);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00024710(void) {
    return func_00024734() == 2;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024734);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002476C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000247A8);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024820);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002486C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002488C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000248FC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024970);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000249E4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024A5C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024BA8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024BA8(s32 arg0) {
    func_00024BE0(arg0, 1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024BC4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024BC4(s32 arg0) {
    func_00024BE0(arg0, 0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024BE0);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024C84);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024C84(s32 arg0) {
    func_00024CBC(arg0, 1);
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024CA0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024CA0(s32 arg0) {
    func_00024CBC(arg0, 0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024CBC);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024D50);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
s32 func_00024D50(s32 arg0) {
    return arg0 < 8;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024D58);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024DE4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024DE4(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024DEC);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024DEC(void) {

}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024DF4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00024DF4(void) {

}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024DFC);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D6C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D728);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024EF4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024F00);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024F0C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024F5C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024FAC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00024FD0);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000250E4);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025180);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00025180(s32 arg0) {
    sceIoDclose(arg0);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002519C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002525C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025300);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025348);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000253BC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025404);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025518);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025720);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000257B4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025864);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002588C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000258F0);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025AF8);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025B28);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025CC8);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025E0C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025E80);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025EB0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025EBC);
#endif

#if FW_VERSION == 100
s32 func_00025EBC(void) {
    s32 var_v0;

    var_v0 = vshMSAudioGetICVInfo();
    if (var_v0 != 0) {
        var_v0 = 0x96A7;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00025EE0);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026084);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0001DDF0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000263EC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002647C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000265A0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000265A0(s32 arg0, s32 arg1) {
    func_0002647C(arg0, arg1);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000265BC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000265D8);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026698);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00026698(void) {
    vshMSAudioEndTrack();
}
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000266B4);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_000266B4(void) {
    func_00026698();
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000266D0);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D7E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D7F4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000266EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D81C);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D830);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D838);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D840);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D848);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D850);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D858);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000268E4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026A6C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026B20);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026CC4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026E68);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00026F98);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002703C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0001EB38);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002711C);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027134);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_00027134(s32 arg0) {
    D_000616BC = arg0;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027140);
#endif

#if FW_VERSION == 150 || (FW_VERSION >= 201 && FW_VERSION < 260)
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002714C);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0002714C(s32 arg0, s32 arg1) {
    func_0002439C(arg0, 0x52, arg1);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002716C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000273D4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027554);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027650);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000276F4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000277EC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027814);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_0002782C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028D78);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000278A4);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D968);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9A0);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9B0);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9B4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027924);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027B58);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027BB4);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9C8);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9E0);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9EC);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005D9F8);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005DA04);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005DA20);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00027F5C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028108);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005DA64);

INCLUDE_RODATA("nonmatchings/music_plugin_00024250", D_0005DA70);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000282CC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028434);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00029924);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028484);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000285F8);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028654);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028814);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000288E4);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028A78);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028B78);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028BEC);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028D8C);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00028F18);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00029000);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_00029054);

INCLUDE_ASM("nonmatchings/music_plugin_00024250", func_000290B8);
#endif
