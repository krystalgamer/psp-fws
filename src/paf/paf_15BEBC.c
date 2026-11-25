#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_0015BEBC(void) {
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015BEC4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015BEF0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C2D0);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C410);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C748);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C824);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C854);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C8A0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C92C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C9A0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CA44);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CAE0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CB78);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CC00);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CD78);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CE68);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D1E4);

void *func_0015D298(u8 *arg0, u8 *arg1) {
    *arg1 = *arg0;
    return arg0 + 1;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D2A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D2D8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D428);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00104564);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119458);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D668);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D88C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D924);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D9B0);

s32 func_0015D9E8(struct Unk_func_0015D9E8_0 *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_a3;
    void *var_a0;

    temp_a3 = (u8 *)arg0 + arg0->unk4;
    var_a0 = (u8 *)arg0 + arg0->unk8;
    var_a2 = 0;
    if ((u32) var_a0 < (u32) temp_a3) {
        do {
            if ((arg1 == 0) || (M2C_FIELD(var_a0, u16 *, 0) == arg1)) {
                var_a2 += 1;
            }
            var_a0 += M2C_FIELD(var_a0, s32 *, 4);
        } while ((u32) var_a0 < (u32) temp_a3);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DA34);

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119884);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119900);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119930);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119960);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001199B4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001199D4);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DA94);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DABC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DC94);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00106BC0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00106BEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119D60);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119D7C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DDC0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DDEC);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DE14);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2284);

#if FW_VERSION < 200 || FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2584);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00124F58);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00124FC8);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00124FE8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001247D8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001247F8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00124818);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00136E88);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00136EA8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00136EC8);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A28F8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2918);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2938);
#endif

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2958);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A299C);

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuInit);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTerm);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119E44);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119F0C);
#endif

#if FW_VERSION == 282
s32 sceGuTerm(void) {
    sceKernelDeleteEventFlag(D_001D7A3C);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A29C8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2A08);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_0019640C);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00196464);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001964BC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuStart);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSetDither);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFinish);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFinishId);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuCallMode);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001248FC);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00124954);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001249AC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00136FAC);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00137004);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_0013705C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00119F38);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00106F64);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A204);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00107368);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A0B8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A204);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A3BC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2A1C);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2A74);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2ACC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuStart);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSetDither);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFinish);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFinishId);

void sceGuCallMode(s32 arg0) {
    D_001D7A64 = arg0;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015E50C);
#endif

void func_0015E5D8(void) {
    sceGeContinue();
}

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuCallList);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00155F6C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00156010);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00156044);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00156054);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00107450);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A474);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A588);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011A680);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015E730);

s32 func_0015E7D8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_001D7A54->unkC - (D_001D7A54->unk4 - D_001D7A54->unk0);
    }
    return D_001D7A54->unk4;
}

void func_0015E80C(s32 arg0) {
    D_001D7A54->unk4 = arg0;
}

s32 func_0015E81C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_001D7A58 != 0) {

    } else {
        var_v0 = sceGeListUpdateStallAddr(D_001D7A04, M2C_FIELD(D_001D7A54, void **, 4));
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSync);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuEnable);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDisable);

s32 func_0015EEC8(void) {
    return D_001D7A68;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015EED4);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSetMatrix);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawArray);
#else
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011AAB0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011ADA8);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015F3E4);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBezier);
#else
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011AF64);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015F644);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00108618);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawSprite);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSpriteMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuCopyImage);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearColor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearStencil);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearDepth);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClear);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBufferList);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDispBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDisplay);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSwapBuffers);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuViewport);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthRange);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthOffset);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B2D8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B6E4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00108AE8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B718);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B854);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B87C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B8A4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011B8CC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BB44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00108FF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BC3C);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BCA4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BD20);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BDE0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BE48);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109274);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010931C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001093FC);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuOffset);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuPatchDivide);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109444);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109490);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001094C8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuAmbient);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109540);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuColor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001095A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C1AC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109684);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001096CC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C32C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010975C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BECC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011BF60);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C02C_v100);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C074);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C0B0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C0D4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C128);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C16C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C18C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C1AC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C2A4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C32C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C348);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C37C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015F864);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawSprite);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSpriteMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuCopyImage);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearColor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearStencil);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClearDepth);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClear);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBufferList);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDispBuffer);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDisplay);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSwapBuffers);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuViewport);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthRange);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthOffset);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuOffset);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuPatchDivide);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001606C4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuAmbient);

void sceGuColor(s32 arg0) {
    func_001607C4(7, arg0);
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016079C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001607C4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160860);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001608A0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001608FC);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFrontFace);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuShadeModel);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuLight);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109818);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C484);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001098F0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109964);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuLightColor);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109A08);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109B24);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFilter);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFunc);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexEnvColor);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C674);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109C08);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109C40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109CA4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexWrap);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109CD4);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00107EB8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001964E0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexMapMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexProjMapMode);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109D0C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C804);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109E00);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109E64);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexImage);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexScale);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexOffset);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFlush);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C8F4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C9CC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA00);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A00C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A02C);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClutMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClutLoad);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA70);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CAA8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A100);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A180);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuAlphaFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthMask);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuPixelMask);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuScissor);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A1D4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC2C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC4C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC6C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A2C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A374);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A3BC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A3E4);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuBlendFunc);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C3D4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C484);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C4A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C50C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C588);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C674);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C6E4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C708);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C758);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C784);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C7A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C804);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C884);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C8D4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C8F4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011C9CC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA00);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA34);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA54);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CA70);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CAA8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CB10);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CB88);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CBF4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC2C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC4C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CC6C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CCB0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CD88);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CDAC);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CDDC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CE54);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001616A8);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDebugPrint);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011CF38);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSetCallback);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumSetMatrixStack);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumLoadIdentity);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D0A0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D514);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D80C);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109630);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109A5C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPerspective);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00109E78);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015A0B8);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A1D4_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010A574);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010AC24);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D0DC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D460);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001653F4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D514);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001690E8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D6CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumUpdateMatrix);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010ADE0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B478);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B4F8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B578);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015B78C);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_0019652C);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00122B84);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B8A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001690E8);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00169128);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D70C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D78C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D80C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D868);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001690E8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B010);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00169128);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011D920);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160A8C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160AB4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160B28);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuLightColor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160CD4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFilter);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexEnvColor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexWrap);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160E90);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexMapMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexProjMapMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00160FBC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexImage);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexScale);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexOffset);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuTexFlush);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016117C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClutMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuClutLoad);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00161240);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001612B0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuAlphaFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDepthMask);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuPixelMask);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuScissor);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00161478);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001614B8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001614E0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuBlendFunc);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00161574);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001616A8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDebugPrint);

s32 sceGuSetCallback(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg0 != 1) {
        if (arg0 == 4) {
            var_a2 = D_001D7A10.unk4;
            D_001D7A10.unk4 = arg1;
        }
    } else {
        var_a2 = D_001D7A10.unk0;
        D_001D7A10.unk0 = arg1;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumSetMatrixStack);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2AF0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumLoadIdentity);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00161ADC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00161F08);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPerspective);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00162680);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00162A20);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001630D0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001634C4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00163CA4);

void sceGumUpdateMatrix(void) {
    func_001653F4();
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00163D18);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00163D98);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00163E18);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumRotateY);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumRotateZ);

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00122B84);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B180);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010B2FC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011DA90);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011DBE4);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumTranslate);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumScale);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C0CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015FC60);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_0019CA74);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_0019AF34);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011DEE4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011DF2C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E040);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E120);
#endif

#if FW_VERSION == 151 || (FW_VERSION >= 250 && FW_VERSION < 282)
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_00122B84);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001370B4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E438);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016496C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00164CC0);
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumMatrixMode);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPushMatrix);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPopMatrix);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E548);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C5AC);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E598);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165170);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001651D0);
#else
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumDrawArray);
#endif

#if FW_VERSION == 282
void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawArray(arg0, arg1, arg2, arg3, arg4);
}
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165280);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001652FC);
#else
void func_001652FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawBezier(arg0, arg1, arg2, arg3, arg4);
}
#endif

void func_00165368(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_001653F4();
    func_0015F644(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

#if FW_VERSION >= 152
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001653F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010BEEC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001654B8);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165520);

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetVoice);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001690E8);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetVolume);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015CA98);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00169128);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011E914);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C2B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C400);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C460);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveGetStat);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EBC8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EBFC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EE60);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EEF0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EEF8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EF4C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F04C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F0D0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F170);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165888);
#endif

#if FW_VERSION == 100 || FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001659D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F22C_v100);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F28C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F378);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F3BC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165A34);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveGetStat);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165AD4);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWavePlayEx);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveStop);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165DC4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165E34);

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C8B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F51C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F558);
#endif

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165E9C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165F04);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011EE60);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010C9E8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CA84);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetLoopMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWavePause);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001690E8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveReplay);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00169128);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CB08);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CB68);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CBC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CC0C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CC44);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CC80);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010AE58);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CCBC_v150);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F664);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0010CE7C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F740);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011F8F8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DA3C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DCE8);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011FA3C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0011FCD8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001201F0);
#endif

#if FW_VERSION == 200
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015E3EC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165F6C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165FBC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166058);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetLoopMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWavePause);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveReplay);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001661D8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166210);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016624C);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2B48);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2B64);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166288);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016632C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166444);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016662C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166764);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166A10);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00166F80);
#endif

void sceReg_9B25EDF1(void) {
}

void sceReg_92E41280(void) {
}

void sceReg_FA8A5739(void) {
}

void sceReg_DEDA92BF(void) {
}

void sceReg_1D8A762E(void) {
}

void sceReg_0CAE832B(void) {
}

void sceReg_39461B4D(void) {
}

void sceReg_0D69BF40(void) {
}

void sceReg_57641A81(void) {
}

void sceReg_17768E14(void) {
}

void sceReg_D4475AA8(void) {
}

void sceReg_28A8E98A(void) {
}

void sceReg_2C0DB9DD(void) {
}

void sceReg_2D211135(void) {
}

void sceReg_4CA16893(void) {
}
