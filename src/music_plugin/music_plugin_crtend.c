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

__asm__(".globl _ZTV14Class_00061148\n_ZTV14Class_00061148 = D_00061148 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061158);

__asm__(".globl _ZTV14Class_00061158\n_ZTV14Class_00061158 = D_00061158 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061168);

__asm__(".globl _ZTV14Class_00061168\n_ZTV14Class_00061168 = D_00061168 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061188);

__asm__(".globl _ZTV14Class_00061188\n_ZTV14Class_00061188 = D_00061188 - 8\n");
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061208);

__asm__(".globl _ZTV14Class_00061208\n_ZTV14Class_00061208 = D_00061208 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE68);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE78);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE88);

__asm__(".globl _ZTV14Class_0008BE88\n_ZTV14Class_0008BE88 = D_0008BE88 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BE98);

__asm__(".globl _ZTV14Class_0008BE98\n_ZTV14Class_0008BE98 = D_0008BE98 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BEA8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BED0);

__asm__(".globl _ZTV14Class_0008BED0\n_ZTV14Class_0008BED0 = D_0008BED0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061220);

__asm__(".globl _ZTV14Class_00061220\n_ZTV14Class_00061220 = D_00061220 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BEF0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF00);

__asm__(".globl _ZTV14Class_0008BF00\n_ZTV14Class_0008BF00 = D_0008BF00 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF10);

__asm__(".globl _ZTV14Class_0008BF10\n_ZTV14Class_0008BF10 = D_0008BF10 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF28);

__asm__(".globl _ZTV14Class_0008BF28\n_ZTV14Class_0008BF28 = D_0008BF28 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF38);

__asm__(".globl _ZTV14Class_0008BF38\n_ZTV14Class_0008BF38 = D_0008BF38 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF50);

__asm__(".globl _ZTV14Class_0008BF50\n_ZTV14Class_0008BF50 = D_0008BF50 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF60);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF78);

__asm__(".globl _ZTV14Class_0008BF78\n_ZTV14Class_0008BF78 = D_0008BF78 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF88);

__asm__(".globl _ZTV14Class_0008BF88\n_ZTV14Class_0008BF88 = D_0008BF88 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BF98);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFA8);

__asm__(".globl _ZTV14Class_0008BFA8\n_ZTV14Class_0008BFA8 = D_0008BFA8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFB8);

__asm__(".globl _ZTV14Class_0008BFB8\n_ZTV14Class_0008BFB8 = D_0008BFB8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFC8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFD8);

__asm__(".globl _ZTV14Class_0008BFD8\n_ZTV14Class_0008BFD8 = D_0008BFD8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008BFE8);

__asm__(".globl _ZTV14Class_0008BFE8\n_ZTV14Class_0008BFE8 = D_0008BFE8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C000);

__asm__(".globl _ZTV14Class_0008C000\n_ZTV14Class_0008C000 = D_0008C000 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C010);

__asm__(".globl _ZTV14Class_0008C010\n_ZTV14Class_0008C010 = D_0008C010 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C028);

__asm__(".globl _ZTV14Class_0008C028\n_ZTV14Class_0008C028 = D_0008C028 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C038);

__asm__(".globl _ZTV14Class_0008C038\n_ZTV14Class_0008C038 = D_0008C038 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C048);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C050);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C060);

__asm__(".globl _ZTV14Class_0008C060\n_ZTV14Class_0008C060 = D_0008C060 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C070);

__asm__(".globl _ZTV14Class_0008C070\n_ZTV14Class_0008C070 = D_0008C070 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C080);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C090);

__asm__(".globl _ZTV14Class_0008C090\n_ZTV14Class_0008C090 = D_0008C090 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0A0);

__asm__(".globl _ZTV14Class_0008C0A0\n_ZTV14Class_0008C0A0 = D_0008C0A0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0B0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0C0);

__asm__(".globl _ZTV14Class_0008C0C0\n_ZTV14Class_0008C0C0 = D_0008C0C0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0D0);

__asm__(".globl _ZTV14Class_0008C0D0\n_ZTV14Class_0008C0D0 = D_0008C0D0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0E0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C0F0);

__asm__(".globl _ZTV14Class_0008C0F0\n_ZTV14Class_0008C0F0 = D_0008C0F0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C100);

__asm__(".globl _ZTV14Class_0008C100\n_ZTV14Class_0008C100 = D_0008C100 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C110);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C118);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C128);

__asm__(".globl _ZTV14Class_0008C128\n_ZTV14Class_0008C128 = D_0008C128 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C138);

__asm__(".globl _ZTV14Class_0008C138\n_ZTV14Class_0008C138 = D_0008C138 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C158);

__asm__(".globl _ZTV14Class_0008C158\n_ZTV14Class_0008C158 = D_0008C158 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C168);

__asm__(".globl _ZTV14Class_0008C168\n_ZTV14Class_0008C168 = D_0008C168 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C178);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C180);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C190);

__asm__(".globl _ZTV14Class_0008C190\n_ZTV14Class_0008C190 = D_0008C190 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1A0);

__asm__(".globl _ZTV14Class_0008C1A0\n_ZTV14Class_0008C1A0 = D_0008C1A0 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1B8);

__asm__(".globl _ZTV14Class_0008C1B8\n_ZTV14Class_0008C1B8 = D_0008C1B8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1C0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1C8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1D8);

__asm__(".globl _ZTV14Class_0008C1D8\n_ZTV14Class_0008C1D8 = D_0008C1D8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1E8);

__asm__(".globl _ZTV14Class_0008C1E8\n_ZTV14Class_0008C1E8 = D_0008C1E8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C1F8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C200);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C210);

__asm__(".globl _ZTV14Class_0008C210\n_ZTV14Class_0008C210 = D_0008C210 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C220);

__asm__(".globl _ZTV14Class_0008C220\n_ZTV14Class_0008C220 = D_0008C220 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C230);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C238);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C23C);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C248);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C258);

__asm__(".globl _ZTV14Class_0008C258\n_ZTV14Class_0008C258 = D_0008C258 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C268);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C270);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C280);

__asm__(".globl _ZTV14Class_0008C280\n_ZTV14Class_0008C280 = D_0008C280 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C290);

__asm__(".globl _ZTV14Class_0008C290\n_ZTV14Class_0008C290 = D_0008C290 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2A0);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2A8);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2B8);

__asm__(".globl _ZTV14Class_0008C2B8\n_ZTV14Class_0008C2B8 = D_0008C2B8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C2C8);

__asm__(".globl _ZTV14Class_0008C2C8\n_ZTV14Class_0008C2C8 = D_0008C2C8 - 8\n");

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

__asm__(".globl _ZTV14Class_0008C338\n_ZTV14Class_0008C338 = D_0008C338 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C348);

__asm__(".globl _ZTV14Class_0008C348\n_ZTV14Class_0008C348 = D_0008C348 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C358);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C368);

__asm__(".globl _ZTV14Class_0008C368\n_ZTV14Class_0008C368 = D_0008C368 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C378);

__asm__(".globl _ZTV14Class_0008C378\n_ZTV14Class_0008C378 = D_0008C378 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_0008C388);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061198);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061208);

__asm__(".globl _ZTV14Class_00061208\n_ZTV14Class_00061208 = D_00061208 - 8\n");

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061220);

__asm__(".globl _ZTV14Class_00061220\n_ZTV14Class_00061220 = D_00061220 - 8\n");
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061230);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061234);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061238);

INCLUDE_RODATA("nonmatchings/music_plugin_crtend", D_00061250);
#endif
