#include "common.h"
#include "paf_decls.h"

void func_0015BEBC(void) {
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015BEC4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015BEF0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015C2D0);

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

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015D668);

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

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DA94);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DABC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DC94);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DDC0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DDEC);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015DE14);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2284);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2584);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A28F8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2918);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2938);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2958);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A299C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuInit);

s32 sceGuTerm(void) {
    sceKernelDeleteEventFlag(D_001D7A3C);
    return 0;
}

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A29C8);

INCLUDE_RODATA("nonmatchings/paf_15BEBC", D_001A2A08);

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

void func_0015E5D8(void) {
    sceGeContinue();
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuCallList);

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

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSync);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuEnable);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDisable);

s32 func_0015EEC8(void) {
    return D_001D7A68;
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015EED4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuSetMatrix);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawArray);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015F3E4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuDrawBezier);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0015F644);

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

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuFrontFace);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuShadeModel);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGuLight);

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

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumRotateY);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumRotateZ);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumTranslate);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumScale);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_0016496C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00164CC0);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumMatrixMode);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPushMatrix);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceGumPopMatrix);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165170);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001651D0);

void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawArray(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165280);

void func_001652FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawBezier(arg0, arg1, arg2, arg3, arg4);
}

void func_00165368(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_001653F4();
    func_0015F644(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001653F4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001654B8);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165520);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetVoice);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveSetVolume);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165888);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_001659D4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165A34);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveGetStat);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165AD4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWavePlayEx);

INCLUDE_ASM("nonmatchings/paf_15BEBC", sceWaveStop);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165DC4);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165E34);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165E9C);

INCLUDE_ASM("nonmatchings/paf_15BEBC", func_00165F04);

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

