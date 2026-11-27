/* lang: c++ */
/* cflags: -O2 */
#include "common.h"
#include "music_plugin_decls.h"

void func_00001B64(void) {
    func_ptr *p;

    for (p = D_00002004 - 1; *p != (func_ptr)-1; p--) {
        (*p)();
    }
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00001BBC);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058054);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058090);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00088D58);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058640);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_0005868C);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_000589D4);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058A3C);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058AB0);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00058E28);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_0005904C);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00059128);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_000591F8);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_0005922C);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_000592A8);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00059374);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_000593A4);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_00059640);

INCLUDE_ASM("nonmatchings/music_plugin_crtend", func_0005975C);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061148);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061158);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061168);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061188);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061208);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE68);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE78);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE88);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE98);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BEA8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BED0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061220);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BEF0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF00);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF10);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF28);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF38);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF50);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF60);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF78);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF88);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF98);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFA8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFB8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFC8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFD8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFE8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C000);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C010);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C028);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C038);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C048);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C050);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C060);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C070);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C080);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C090);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0A0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0B0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0C0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0D0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0E0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0F0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C100);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C110);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C118);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C128);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C138);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C158);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C168);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C178);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C180);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C190);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1A0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1B8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1C0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1C8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1D8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1E8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1F8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C200);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C210);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C220);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C230);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C238);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C23C);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C248);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C258);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C268);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C270);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C280);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C290);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2A0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2A8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2B8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2C8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2D8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2E0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2EC);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2F0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2F4);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2F8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C31C);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C320);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C324);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C328);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C32C);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C338);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C348);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C358);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C368);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C378);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C388);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061198);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061208);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061220);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061230);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061234);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061238);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061250);
#endif
