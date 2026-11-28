/* lang: c++ */
#include "common.h"
#include "pafmini_decls.h"

INCLUDE_ASM("nonmatchings/pafmini", func_00000030);

INCLUDE_ASM("nonmatchings/pafmini", func_000000B8);

s32 module_start(void) {
    func_00000000();
    func_00000648(0, 0);
    return 0;
}

s32 module_stop(void) {
    func_000CED84();
    return 0;
}

void paf_fini(void) {
    func_000CED84();
}

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel10WidgetTypeEv);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel10WidgetTypeEv(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel14SetPatchDivideEi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel14SetPatchDivideEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel8SetModelEPvi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel8SetModelEPvi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel16SetCurrentMotionEif);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel16SetCurrentMotionEif(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModelC1EPNS_8PhWidgetEPNS_8PhAppearE);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModelC1EPNS_8PhWidgetEPNS_8PhAppearE(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf7PhModel14GetMotionCountEv);
#endif

#if FW_VERSION == 100
void _ZNK3paf7PhModel14GetMotionCountEv(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf7PhModel8GetFrameEv);
#endif

#if FW_VERSION == 100
void _ZNK3paf7PhModel8GetFrameEv(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel12SetFrameLoopEff);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel12SetFrameLoopEff(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel14SetFrameRepeatEi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel14SetFrameRepeatEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel8SetFrameEf);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel8SetFrameEf(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel12SetFrameRateEf);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel12SetFrameRateEf(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf7PhModel16GetCurrentMotionEv);
#endif

#if FW_VERSION == 100
void _ZNK3paf7PhModel16GetCurrentMotionEv(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel15SetTextureImageERKNS_12SurfaceRCPtrINS_7SurfaceEEEi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel15SetTextureImageERKNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhModel17SetTexturePaletteERKNS_12SurfaceRCPtrINS_7SurfaceEEEif);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhModel17SetTexturePaletteERKNS_12SurfaceRCPtrINS_7SurfaceEEEif(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf7PhModel15GetTextureImageERNS_12SurfaceRCPtrINS_7SurfaceEEEi);
#endif

#if FW_VERSION == 100
void _ZNK3paf7PhModel15GetTextureImageERNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf7PhModel17GetTexturePaletteERNS_12SurfaceRCPtrINS_7SurfaceEEEi);
#endif

#if FW_VERSION == 100
void _ZNK3paf7PhModel17GetTexturePaletteERNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10SetListNumEi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar10SetListNumEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar13SetFocusIndexEii);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar13SetFocusIndexEii(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar6RedrawEii);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar6RedrawEii(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10DeleteItemEiif);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar10DeleteItemEiif(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10InsertItemEii);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar10InsertItemEii(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", scePaf_04EF78CD);
#endif

#if FW_VERSION == 100
void scePaf_04EF78CD(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar11UpdateItemsEi);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar11UpdateItemsEi(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar12AnimIconPlayEiif);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar12AnimIconPlayEiif(void) {

}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar12AnimIconStopEii);
#endif

#if FW_VERSION == 100
void _ZN3paf7PhXmBar12AnimIconStopEii(void) {

}
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar19GetFocusedItemIndexEi);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar7CloseUpEiibbff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8CloseOffEiiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9SelectOutEf);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10ScrollDownEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10ScrollLeftEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar11ScrollRightEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8ScrollUpEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10WidgetTypeEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8SelectInEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar17SetOtherItemAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar11SetTopAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar16SetTopLabelAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar16SetOtherTopAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8HideFadeEff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar7SetFadeEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8SetAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8ShowFadeEff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9HideLabelEiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9ShowLabelEiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8IconMoveERK4vec4ffb);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8IconSizeEiiRK4vec4ff);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObjectnwEj);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSHeap14private_mallocEj);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSHeap12private_freeEPv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValuenaEj);

INCLUDE_ASM("nonmatchings/pafmini", _Z11PSJS_Mallocj);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValuenwEjPv);

INCLUDE_ASM("nonmatchings/pafmini", _Z9PSJS_FreePv);

INCLUDE_ASM("nonmatchings/pafmini", _Z13PSJS_ExecFuncRK11PSJSContextRK9PSJSValueRS2_iPS2_S6_);

INCLUDE_ASM("nonmatchings/pafmini", _Z20PSJS_ClassType_Arrayv);

INCLUDE_ASM("nonmatchings/pafmini", _Z21PSJS_InternalExecFuncRK11PSJSContextRK9PSJSValueRS2_iPS2_S6_);

INCLUDE_ASM("nonmatchings/pafmini", _Z25PSJS_BuildValueImpl_ArrayRK11PSJSContextiP9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _Z25PSJS_BuildValueImpl_ErrorRK11PSJSContext19PSJS_EXCEPTION_TYPEPKc);

INCLUDE_ASM("nonmatchings/pafmini", _Z25PSJS_ClassType_NativeFuncv);

INCLUDE_ASM("nonmatchings/pafmini", _Z25PSJS_ClassType_ScriptFuncv);

INCLUDE_ASM("nonmatchings/pafmini", _Z26PSJS_BuildValueImpl_ObjectRK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _Z31PSJS_BuildValue_TemporaryObjectRK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _Z33PSJS_RecycleValue_TemporaryObjectRK11PSJSContextR9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObject7DelAttrERK8psjsname);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObject7DelAttrEi);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObject7SetAttrERK8psjsnameRK9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObject7SetAttrEiRK9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObjectC2ERK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext11SetUserDataEPv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext12RegistGlobalEPKcP13PSJSValueImpl);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSPageTable12PageCloseAllEPN3paf4ViewE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextP10PSJSObject);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextRK10psjsstring);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextb);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextf);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContexti);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl6DecRefEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec28RegistFinalExecWithClearSyncEPFvPvS0_S0_bES0_S0_S0_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8psjsnameC1ERK11PSJSContextPKti);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValue7SetAttrERK8psjsnameRKS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValueaSEP13PSJSValueImpl);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValueaSERKS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK10PSJSObject10IsSubClassEPKt);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK10PSJSObject11ToPrimitiveE15ToPrimitiveHint);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK10PSJSObject7GetAttrERK8psjsnameP9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK10PSJSObject7GetAttrEiP9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK11PSJSContext11GetUserDataEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue6ToBoolEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue7GetAttrERK11PSJSContextRK8psjsnamePS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue7IsClassEPKt);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue7ToFloatEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue7ToInt32Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue8ToUint32Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10psjsstringC1EPKt);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13psjsname_impl6DecRefEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN15psjsstring_impl6DecRefEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK15psjsstring_impl7compareEPKS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10PSJSObjectdlEPv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext22SetHeapIsEmptyCallbackEPFvPvES0_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec10RegistExecEPFvPvS0_S0_bES0_S0_S0_b);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec16FinalizeExecSyncEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec21RegistExecTopPriorityEPFvPvS0_S0_bES0_S0_S0_b);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec6ResumeEPFvPvS0_S0_bES0_S0_S0_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSExec7SuspendEPFvPvS0_S0_bES0_S0_S0_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValue6AssignERK11PSJSContextP13PSJSValueImpl);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValuedaEPv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK8PSJSPage6IsOpenEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue8ToStringEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSHeapC1Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSHeapC1EPvj);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8PSJSHeapD1Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext4LoadEPK8PSJSFile);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext14RegistStandardEv);

INCLUDE_ASM("nonmatchings/pafmini", _Z9PSJS_ExecRK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _Z9PSJS_ExecRK11PSJSContextP9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContextD1Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContextC1Ev);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContextaSERKS_);

INCLUDE_ASM("nonmatchings/pafmini", _Z30PSJS_BuildValueImpl_NativeFuncRK11PSJSContextPFbS1_R9PSJSValue12PSJSCallTypeiPS2_S5_Eh);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext17SetStdOutCallbackEPFvPKtiPvES2_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext17SetStdErrCallbackEPFvPKtiPvES2_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext17RegistMethodToObjER9PSJSValuePK12PSJSAPIEntry);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext21RegistExtensionVectorEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContextC1ERKS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValue12SetPrototypeERKS_);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue10IsSubClassEPKt);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSValue16TypeToPsjsstringE13PSJSValueType);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10psjsvectorC1EjPf);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextRK10psjsvector);

INCLUDE_ASM("nonmatchings/pafmini", _ZN9PSJSErrorC2ERK11PSJSContext);

INCLUDE_ASM("nonmatchings/pafmini", _ZTV9PSJSError);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSError10IsSubClassEPKt);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK11PSJSContext10FindGlobalEPKc);

INCLUDE_ASM("nonmatchings/pafmini", _ZN10psjsvectorC1EjPfPNS_12ELEMENT_TYPEE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext13PSJSValueType);

INCLUDE_ASM("nonmatchings/pafmini", _ZN8psjsname18null_psjs_char_strE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext12SetExceptionERK9PSJSValue);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext22SetExecMonitorCallbackEjPFbbPvES0_);

INCLUDE_ASM("nonmatchings/pafmini", _ZN11PSJSContext12RegistGlobalEPKci);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", _ZN10psjsvector13element_shiftE);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK9PSJSValue8ToNumberERK11PSJSContext);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", scePaf_78192717);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8CloseOffEiiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9SelectOutEf);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10ScrollDownEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10ScrollLeftEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar11ScrollRightEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8ScrollUpEfPNS_7PhEventE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar10WidgetTypeEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8SelectInEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar17SetOtherItemAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar11SetTopAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar16SetTopLabelAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar16SetOtherTopAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8HideFadeEff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar7SetFadeEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8SetAlphaEfff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8ShowFadeEff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9HideLabelEiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar9ShowLabelEiff);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8IconMoveERK4vec4ffb);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf7PhXmBar8IconSizeEiiRK4vec4ff);
#endif

#if FW_VERSION == 282
void paf::PhModel::WidgetType() {
}

void paf::PhModel::SetPatchDivide(int cxxp1) {
}

void paf::PhModel::SetModel(void* cxxp1, int cxxp2) {
}

void paf::PhModel::SetCurrentMotion(int cxxp1, float cxxp2) {
}

void _ZN3paf7PhModelC1EPNS_8PhWidgetEPNS_8PhAppearE(void) {
}

void paf::PhModel::GetMotionCount() const {
}

void paf::PhModel::GetFrame() const {
}

void paf::PhModel::SetFrameLoop(float cxxp1, float cxxp2) {
}

void paf::PhModel::SetFrameRepeat(int cxxp1) {
}

void paf::PhModel::SetFrame(float cxxp1) {
}

void paf::PhModel::SetFrameRate(float cxxp1) {
}

void paf::PhModel::GetCurrentMotion() const {
}

void _ZN3paf7PhModel15SetTextureImageERKNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {
}

void _ZN3paf7PhModel17SetTexturePaletteERKNS_12SurfaceRCPtrINS_7SurfaceEEEif(void) {
}

void _ZNK3paf7PhModel15GetTextureImageERNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {
}

void _ZNK3paf7PhModel17GetTexturePaletteERNS_12SurfaceRCPtrINS_7SurfaceEEEi(void) {
}

void paf::PhXmBar::SetListNum(int cxxp1) {
}

void paf::PhXmBar::SetFocusIndex(int cxxp1, int cxxp2) {
}

void paf::PhXmBar::Redraw(int cxxp1, int cxxp2) {
}

void paf::PhXmBar::DeleteItem(int cxxp1, int cxxp2, float cxxp3) {
}

void paf::PhXmBar::InsertItem(int cxxp1, int cxxp2) {
}

void scePaf_04EF78CD(void) {
}

void paf::PhXmBar::UpdateItems(int cxxp1) {
}

void paf::PhXmBar::AnimIconPlay(int cxxp1, int cxxp2, float cxxp3) {
}

void paf::PhXmBar::AnimIconStop(int cxxp1, int cxxp2) {
}

void paf::PhXmBar::GetFocusedItemIndex(int cxxp1) {
}

void _ZN3paf7PhXmBar7CloseUpEiibbff(void) {
}

void paf::PhXmBar::CloseOff(int cxxp1, int cxxp2, float cxxp3, float cxxp4) {
}

void paf::PhXmBar::SelectOut(float cxxp1) {
}

void paf::PhXmBar::ScrollDown(float cxxp1, paf::PhEvent* cxxp2) {
}

void paf::PhXmBar::ScrollLeft(float cxxp1, paf::PhEvent* cxxp2) {
}

void paf::PhXmBar::ScrollRight(float cxxp1, paf::PhEvent* cxxp2) {
}

void paf::PhXmBar::ScrollUp(float cxxp1, paf::PhEvent* cxxp2) {
}

void paf::PhXmBar::WidgetType() {
}

void paf::PhXmBar::SelectIn(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::SetOtherItemAlpha(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::SetTopAlpha(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::SetTopLabelAlpha(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::SetOtherTopAlpha(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::HideFade(float cxxp1, float cxxp2) {
}

void paf::PhXmBar::SetFade(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::SetAlpha(float cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::ShowFade(float cxxp1, float cxxp2) {
}

void paf::PhXmBar::HideLabel(int cxxp1, float cxxp2, float cxxp3) {
}

void paf::PhXmBar::ShowLabel(int cxxp1, float cxxp2, float cxxp3) {
}

void _ZN3paf7PhXmBar8IconMoveERK4vec4ffb(void) {
}

void paf::PhXmBar::IconSize(int cxxp1, int cxxp2, vec4 const& cxxp3, float cxxp4, float cxxp5) {
}

void paf::PhItemSpin::WidgetType() {
}

void scePaf_16033F84(void) {
}

void paf::PhClock::WidgetType() {
}

void paf::PhClock::SetFormat(int cxxp1, int cxxp2) {
}

void _ZN3paf7PhClock7GetTimeERNS0_10datetime_tE(void) {
}

void _ZN3paf7PhClock7SetTimeERKNS0_10datetime_tE(void) {
}

void _ZN3paf7PhClockC1EPNS_8PhWidgetE(void) {
}

void paf::PhClock::SetShadowRender(paf::PhSRender* cxxp1) {
}

void scePaf_6DFFCAAE(void) {
}

void scePaf_7796B70B(void) {
}

void scePaf_4EC4EEC6(void) {
}

void scePaf_02A6AA18(void) {
}

void _ZN10PSJSObjectnwEj(void) {
}

void _ZN9PSJSValuenaEj(void) {
}

void _Z11PSJS_Mallocj(void) {
}

void _ZN9PSJSValuenwEjPv(void) {
}

void _Z9PSJS_FreePv(void) {
}

void _Z13PSJS_ExecFuncRK11PSJSContextRK9PSJSValueRS2_iPS2_S6_(void) {
}

void _Z20PSJS_ClassType_Arrayv(void) {
}

void _Z21PSJS_InternalExecFuncRK11PSJSContextRK9PSJSValueRS2_iPS2_S6_(void) {
}

void _Z25PSJS_BuildValueImpl_ArrayRK11PSJSContextiP9PSJSValue(void) {
}

void _Z25PSJS_BuildValueImpl_ErrorRK11PSJSContext19PSJS_EXCEPTION_TYPEPKc(void) {
}

void _Z25PSJS_ClassType_NativeFuncv(void) {
}

void _Z25PSJS_ClassType_ScriptFuncv(void) {
}

void _Z26PSJS_BuildValueImpl_ObjectRK11PSJSContext(void) {
}

void _Z31PSJS_BuildValue_TemporaryObjectRK11PSJSContext(void) {
}

void _Z33PSJS_RecycleValue_TemporaryObjectRK11PSJSContextR9PSJSValue(void) {
}

void PSJSObject::DelAttr(psjsname const& cxxp1) {
}

void PSJSObject::DelAttr(int cxxp1) {
}

void PSJSObject::SetAttr(psjsname const& cxxp1, PSJSValue const& cxxp2) {
}

void PSJSObject::SetAttr(int cxxp1, PSJSValue const& cxxp2) {
}

void _ZN10PSJSObjectC2ERK11PSJSContext(void) {
}

void PSJSContext::SetUserData(void* cxxp1) {
}

void PSJSContext::RegistGlobal(char const* cxxp1, PSJSValueImpl* cxxp2) {
}

void PSJSPageTable::PageCloseAll(paf::View* cxxp1) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1, PSJSObject* cxxp2) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1, psjsstring const& cxxp2) {
}

void _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContextb(void) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1, float cxxp2) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1, int cxxp2) {
}

void PSJSValueImpl::DecRef() {
}

void _ZN8PSJSExec28RegistFinalExecWithClearSyncEPFvPvS0_S0_bES0_S0_S0_(void) {
}

void _ZN8psjsnameC1ERK11PSJSContextPKti(void) {
}

void PSJSValue::SetAttr(psjsname const& cxxp1, PSJSValue const& cxxp2) {
}

void _ZN9PSJSValueaSEP13PSJSValueImpl(void) {
}

void _ZN9PSJSValueaSERKS_(void) {
}

void PSJSObject::IsSubClass(unsigned short const* cxxp1) const {
}

void _ZNK10PSJSObject11ToPrimitiveE15ToPrimitiveHint(void) {
}

void PSJSObject::GetAttr(psjsname const& cxxp1, PSJSValue* cxxp2) const {
}

void PSJSObject::GetAttr(int cxxp1, PSJSValue* cxxp2) const {
}

void PSJSContext::GetUserData() const {
}

void PSJSValue::ToBool() const {
}

void PSJSValue::GetAttr(PSJSContext const& cxxp1, psjsname const& cxxp2, PSJSValue* cxxp3) const {
}

void PSJSValue::IsClass(unsigned short const* cxxp1) const {
}

void PSJSValue::ToFloat() const {
}

void PSJSValue::ToInt32() const {
}

void PSJSValue::ToUint32() const {
}

void _ZN10psjsstringC1EPKt(void) {
}

void psjsname_impl::DecRef() {
}

void psjsstring_impl::DecRef() {
}

void psjsstring_impl::compare(psjsstring_impl const* cxxp1) const {
}

void _ZN10PSJSObjectdlEPv(void) {
}

void _ZN11PSJSContext22SetHeapIsEmptyCallbackEPFvPvES0_(void) {
}

void _ZN8PSJSExec10RegistExecEPFvPvS0_S0_bES0_S0_S0_b(void) {
}

void PSJSExec::FinalizeExecSync() {
}

void _ZN8PSJSExec21RegistExecTopPriorityEPFvPvS0_S0_bES0_S0_S0_b(void) {
}

void _ZN8PSJSExec6ResumeEPFvPvS0_S0_bES0_S0_S0_(void) {
}

void _ZN8PSJSExec7SuspendEPFvPvS0_S0_bES0_S0_S0_(void) {
}

void PSJSValue::Assign(PSJSContext const& cxxp1, PSJSValueImpl* cxxp2) {
}

void _ZN9PSJSValuedaEPv(void) {
}

void PSJSPage::IsOpen() const {
}

void PSJSValue::ToString() const {
}

void _ZN8PSJSHeapC1Ev(void) {
}

void _ZN8PSJSHeapC1EPvj(void) {
}

void _ZN8PSJSHeapD1Ev(void) {
}

void PSJSContext::Load(PSJSFile const* cxxp1) {
}

void PSJSContext::RegistStandard() {
}

void _Z9PSJS_ExecRK11PSJSContext(void) {
}

void _Z9PSJS_ExecRK11PSJSContextP9PSJSValue(void) {
}

void _ZN11PSJSContextD1Ev(void) {
}

void _ZN11PSJSContextC1Ev(void) {
}

void _ZN11PSJSContextaSERKS_(void) {
}

void _Z30PSJS_BuildValueImpl_NativeFuncRK11PSJSContextPFbS1_R9PSJSValue12PSJSCallTypeiPS2_S5_Eh(void) {
}

void _ZN11PSJSContext17SetStdOutCallbackEPFvPKtiPvES2_(void) {
}

void _ZN11PSJSContext17SetStdErrCallbackEPFvPKtiPvES2_(void) {
}

void PSJSContext::RegistMethodToObj(PSJSValue& cxxp1, PSJSAPIEntry const* cxxp2) {
}

void PSJSContext::RegistExtensionVector() {
}

void _ZN11PSJSContextC1ERKS_(void) {
}

void PSJSValue::SetPrototype(PSJSValue const& cxxp1) {
}

void PSJSValue::IsSubClass(unsigned short const* cxxp1) const {
}

void _ZN9PSJSValue16TypeToPsjsstringE13PSJSValueType(void) {
}

void _ZN10psjsvectorC1EjPf(void) {
}

void PSJSValueImpl::NewFromPool(PSJSContext const& cxxp1, psjsvector const& cxxp2) {
}

void _ZN9PSJSErrorC2ERK11PSJSContext(void) {
}

void _ZTV9PSJSError(void) {
}

void PSJSError::IsSubClass(unsigned short const* cxxp1) const {
}

void PSJSContext::FindGlobal(char const* cxxp1) const {
}

void _ZN10psjsvectorC1EjPfPNS_12ELEMENT_TYPEE(void) {
}

void _ZN13PSJSValueImpl11NewFromPoolERK11PSJSContext13PSJSValueType(void) {
}

void _ZN8psjsname18null_psjs_char_strE(void) {
}

void PSJSContext::SetException(PSJSValue const& cxxp1) {
}

void _ZN11PSJSContext22SetExecMonitorCallbackEjPFbbPvES0_(void) {
}

void PSJSContext::RegistGlobal(char const* cxxp1, int cxxp2) {
}

void _ZN10psjsvector13element_shiftE(void) {
}

void PSJSValue::ToNumber(PSJSContext const& cxxp1) const {
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00000648);

void sinf(void) {
    sce_paf_private_sinf();
}

void cosf(void) {
    sce_paf_private_cosf();
}

void sqrtf(void) {
    sce_paf_private_sqrtf();
}

void malloc(void) {
    sce_paf_private_malloc();
}

void free(void) {
    sce_paf_private_free();
}

void memcpy(void) {
    sce_paf_private_memcpy();
}

void memset(void) {
    sce_paf_private_memset();
}

void memcmp(void) {
    sce_paf_private_memcmp();
}

void floorf(void) {
    sce_paf_private_floorf();
}

void acosf(void) {
    sce_paf_private_acosf();
}

INCLUDE_ASM("nonmatchings/pafmini", printf);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", fwrite);
#endif

#if FW_VERSION == 282
void fwrite(void) {
    sce_paf_private_fwrite();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", strlen);
#endif

#if FW_VERSION == 282
void strlen(void) {
    sce_paf_private_strlen();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", strcpy);
#endif

#if FW_VERSION == 282
void strcpy(void) {
    sce_paf_private_strcpy();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", strncpy);
#endif

#if FW_VERSION == 282
void strncpy(void) {
    sce_paf_private_strncpy();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", rand);
#endif

#if FW_VERSION == 282
void rand(void) {
    sce_paf_private_rand();
}
#else
INCLUDE_ASM("nonmatchings/pafmini", func_00000444);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_00000820);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9Framework9InitParamC1Ev);

void func_00000950(struct Unk_func_00000950_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00000960(struct Unk_func_00000960_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000055C);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_00000970);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9FrameworkC1ERKNS0_9InitParamE);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9FrameworkD1Ev);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00001118);
#endif

#if FW_VERSION == 100
s32 func_00001118(struct Unk_func_00001118_0 *arg0) {
    s32 temp_v0;

    temp_v0 = _Znwj(0x1E4);
    func_00002F4C(temp_v0, arg0->unk8);
    arg0->unk4 = temp_v0;
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00001118(struct Unk_func_00001118_0 *arg0) {
    s32 temp_v0;

    temp_v0 = _Znwj(0x1E8);
    func_00002F4C(temp_v0, arg0->unk8);
    arg0->unk4 = temp_v0;
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00001118(struct Unk_func_00001118_0 *arg0) {
    s32 temp_v0;

    temp_v0 = _Znwj(0x1D4);
    func_00003AEC(temp_v0, arg0->unk8);
    arg0->unk4 = temp_v0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00001160);

#if FW_VERSION < 282
s32 func_0000122C(struct Unk_func_0000122C_0 *arg0) {
    func_000053E4(arg0->unk0);
    return 0;
}
#else
s32 func_0000122C(struct Unk_func_0000122C_0 *arg0) {
    func_000016C0(arg0->unk0, arg0->unk4);
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_00001250);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_000012CC);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9Framework3RunEi);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9Framework5BeginEi);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf9Framework3EndEi);

INCLUDE_ASM("nonmatchings/pafmini", func_000014E4);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000102C);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_000015AC);

INCLUDE_ASM("nonmatchings/pafmini", func_000016C0);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00001790);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000186C);

void _ZN3paf9Framework9SetLocaleE6Locale(struct Unk_scePaf_6C6979F0_0 *arg0, s32 arg1) {
    arg0->unk98 = arg1;
    scePaf_462E5873(arg1);
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00001930);

INCLUDE_ASM("nonmatchings/pafmini", func_00001A4C);

INCLUDE_ASM("nonmatchings/pafmini", func_00001C84);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini", D_000CFB40);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini", D_000D1240);
#endif

INCLUDE_RODATA("nonmatchings/pafmini", D_000D124C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1268);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1284);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D129C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D12B8);

INCLUDE_ASM("nonmatchings/pafmini", func_00001D1C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D130C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1328);

INCLUDE_ASM("nonmatchings/pafmini", func_00001EC0);

INCLUDE_ASM("nonmatchings/pafmini", func_00002128);

s32 paf::Framework::Instance() {
    return D_000E15A8;
}

void func_000021EC(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != &D_000E6030) {
        sce_paf_private_free2(temp_v1, arg1);
    }
}

void func_0000221C(struct Unk_func_0000221C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000222C);

void func_0000226C(struct Unk_func_0000226C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000227C);

INCLUDE_ASM("nonmatchings/pafmini", func_000022BC);

INCLUDE_ASM("nonmatchings/pafmini", func_000023A8);

void func_0000241C(void) {
    func_00002438();
}

#if FW_VERSION == 100
void func_00001CE0(void *arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_v0 = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = func_000023F0((s32) arg0, 0, temp_v0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00002438);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_00002464);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_00002F1C);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_000024B4);

INCLUDE_ASM("nonmatchings/pafmini", func_00002630);

INCLUDE_ASM("nonmatchings/pafmini", func_000026C4);

INCLUDE_ASM("nonmatchings/pafmini", func_000028F0);

INCLUDE_ASM("nonmatchings/pafmini", func_000029F8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_000023F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_000024F0);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_00002AB8);

INCLUDE_ASM("nonmatchings/pafmini", func_00002B94);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00002C40);

#if FW_VERSION < 282
void *func_00002678(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00002500);

void func_000025CC(void *arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_v0 = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = func_000026BC((s32) arg0, 0, temp_v0);
        M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
}

INCLUDE_ASM("nonmatchings/pafmini", func_00002F1C);

INCLUDE_ASM("nonmatchings/pafmini", func_000026BC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_00002D1C);

INCLUDE_ASM("nonmatchings/pafmini", func_00002E20);

INCLUDE_ASM("nonmatchings/pafmini", func_00002F1C);

INCLUDE_ASM("nonmatchings/pafmini", func_00002FB0);
#endif

s32 func_000030C8(void) {
    *func_0000ED54() = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View8ArgumentcviEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View8ArgumentcvfEv);

INCLUDE_ASM("nonmatchings/pafmini", scePaf_8860B0FD);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View9InitParamC1Ev);

void _ZN3paf4View4LoadERKNS0_9InitParamEPFvPS0_E(s32 arg0, s32 arg1) {
    func_000014E4(D_000E15A8, arg0, arg1);
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View6UnloadEPS0_PFvPKcE);
#else
void _ZN3paf4View6UnloadEPS0_PFvPKcE(s32 arg0, s32 arg1) {
    func_000015AC(D_000E15A8, arg0, 0, arg1);
}

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View6UnloadEPKcPFvS2_E);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View4FindEPKc);
#endif

#if FW_VERSION < 282
void _ZN3paf4View4FindEPKc(s32 arg0) {
    func_00001790((s32) D_000E15A8, arg0);
}

INCLUDE_ASM("nonmatchings/pafmini", func_00002990);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000355C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_00002F4C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00003D4C);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_00003400);

INCLUDE_ASM("nonmatchings/pafmini", func_00003AEC);

INCLUDE_ASM("nonmatchings/pafmini", func_00004A88);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00005338);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_000048D0);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_000053E4);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_00005414);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View6GetArgEPKc);

INCLUDE_ASM("nonmatchings/pafmini", func_00005518);

INCLUDE_ASM("nonmatchings/pafmini", func_00005570);

INCLUDE_ASM("nonmatchings/pafmini", func_000055A4);

INCLUDE_ASM("nonmatchings/pafmini", func_000055E8);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View7GetPageEPKc);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D137C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1380);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1388);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D13B8);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D13E4);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1410);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View8PageOpenEPvii);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View8PageOpenEPKcii);
#endif

#if FW_VERSION == 100
void paf::View::PageOpen(char const* cxxp1, int cxxp2, int cxxp3) {
    struct Unk_scePaf_F609FA81_0 *arg0 = (struct Unk_scePaf_F609FA81_0 *) this;
    s32 arg1 = (s32) cxxp1;
    s32 arg2 = (s32) cxxp2;
    s32 arg3 = (s32) cxxp3;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View8PageOpenEPvii((s32) arg0, sp0, arg2, arg3);
    }
}
#endif

#if FW_VERSION == 282
void paf::View::PageOpen(char const* cxxp1, int cxxp2, int cxxp3) {
    struct Unk_scePaf_F609FA81_0 *arg0 = (struct Unk_scePaf_F609FA81_0 *) this;
    s32 arg1 = (s32) cxxp1;
    s32 arg2 = (s32) cxxp2;
    s32 arg3 = (s32) cxxp3;
    void *sp0;
    s32 temp_v0;

    temp_v0 = arg0->unk58;
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View8PageOpenEPvii((s32) arg0, sp0, arg2, arg3);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void paf::View::PageOpen(char const* cxxp1, int cxxp2, int cxxp3) {
    struct Unk_scePaf_F609FA81_0 *arg0 = (struct Unk_scePaf_F609FA81_0 *) this;
    s32 arg1 = (s32) cxxp1;
    s32 arg2 = (s32) cxxp2;
    s32 arg3 = (s32) cxxp3;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View8PageOpenEPvii((s32) arg0, sp0, arg2, arg3);
    }
}
#endif

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1484);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D148C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1498);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D14A8);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View9PageCloseEPv);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View9PageCloseEPKc);
#endif

#if FW_VERSION == 100
void paf::View::PageClose(char const* cxxp1) {
    struct Unk_scePaf_3481F595_0 *arg0 = (struct Unk_scePaf_3481F595_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View9PageCloseEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION == 282
void paf::View::PageClose(char const* cxxp1) {
    struct Unk_scePaf_3481F595_0 *arg0 = (struct Unk_scePaf_3481F595_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = arg0->unk58;
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View9PageCloseEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void paf::View::PageClose(char const* cxxp1) {
    struct Unk_scePaf_3481F595_0 *arg0 = (struct Unk_scePaf_3481F595_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View9PageCloseEPv((s32) arg0, sp0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12PageCloseAllEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12PageActivateEPv);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12PageActivateEPKc);
#endif

#if FW_VERSION == 100
void paf::View::PageActivate(char const* cxxp1) {
    struct Unk_scePaf_CAF05F1D_0 *arg0 = (struct Unk_scePaf_CAF05F1D_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View12PageActivateEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION == 282
void paf::View::PageActivate(char const* cxxp1) {
    struct Unk_scePaf_CAF05F1D_0 *arg0 = (struct Unk_scePaf_CAF05F1D_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = arg0->unk58;
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View12PageActivateEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void paf::View::PageActivate(char const* cxxp1) {
    struct Unk_scePaf_CAF05F1D_0 *arg0 = (struct Unk_scePaf_CAF05F1D_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View12PageActivateEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_00004EC0);
#else
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View14PageInactivateEPv);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View14PageInactivateEPKc);
#endif

#if FW_VERSION == 100
void paf::View::PageInactivate(char const* cxxp1) {
    struct Unk_scePaf_5470B915_0 *arg0 = (struct Unk_scePaf_5470B915_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        func_00004EC0((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION == 282
void paf::View::PageInactivate(char const* cxxp1) {
    struct Unk_scePaf_5470B915_0 *arg0 = (struct Unk_scePaf_5470B915_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = arg0->unk58;
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        _ZN3paf4View14PageInactivateEPv((s32) arg0, sp0);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void paf::View::PageInactivate(char const* cxxp1) {
    struct Unk_scePaf_5470B915_0 *arg0 = (struct Unk_scePaf_5470B915_0 *) this;
    s32 arg1 = (s32) cxxp1;
    void *sp0;
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_v0 == 0) {

    } else if (PAF_Resource_GetPageNodeByID(temp_v0, arg1, &sp0) == 0) {
        func_00004EC0((s32) arg0, sp0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00005D80);

INCLUDE_ASM("nonmatchings/pafmini", func_00005E10);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View16PlayAnimSequenceEPNS_8PhWidgetEPKc);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View16StopAnimSequenceEPNS_8PhWidgetE);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_000050EC);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View8PageRootEPv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View8PageRootEPKc);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View20SetVirtualScreenSizeEPvii);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View20SetVirtualScreenSizeEPKcii);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_000052B0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD61C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD624);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD62C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD634);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini", D_000D0068);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini", D_000CE51C);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/pafmini", D_000EAE5C);
#endif

#if FW_VERSION == 151
INCLUDE_RODATA("nonmatchings/pafmini", D_000E909C);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/pafmini", D_000EAE1C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/pafmini", D_000FD65C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_000060A4);
#endif

INCLUDE_RODATA("nonmatchings/pafmini", D_000D17B4);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D17BC);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D17C0);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/pafmini", D_000FD6D4);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD6E4);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD6F4);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD708);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD718);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD72C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD73C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD74C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD760);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD778);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD790);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD7AC);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD7C0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD7D8);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD7F0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD808);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD824);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD838);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD84C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD864);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD870);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD87C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000FD884);
#endif

INCLUDE_RODATA("nonmatchings/pafmini", D_000D17C8);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D17F0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1810);

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/pafmini", D_000D012C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/pafmini", D_000CE5E0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/pafmini", D_000D1814);
#endif

INCLUDE_RODATA("nonmatchings/pafmini", D_000D182C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1854);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1874);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1894);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D18B0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D18CC);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D18F0);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1918);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D191C);

INCLUDE_RODATA("nonmatchings/pafmini", D_000D1920);

#if FW_VERSION >= 151 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00007EA0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/pafmini", func_000082A4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_00008330);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000853C);

INCLUDE_ASM("nonmatchings/pafmini", func_00008618);

INCLUDE_ASM("nonmatchings/pafmini", func_000086DC);

INCLUDE_ASM("nonmatchings/pafmini", func_000088E0);

INCLUDE_ASM("nonmatchings/pafmini", func_00008918);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View19PsjsCompleteSuspendEPvS1_S1_b);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View18PsjsCompleteResumeEPvS1_S1_b);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00008E14);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_00008DCC);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00008E10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00008E84);

INCLUDE_ASM("nonmatchings/pafmini", func_00008ECC);

INCLUDE_ASM("nonmatchings/pafmini", func_00008F14);

INCLUDE_ASM("nonmatchings/pafmini", func_00008F5C);

INCLUDE_ASM("nonmatchings/pafmini", func_00008F64);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_00008E78);

INCLUDE_ASM("nonmatchings/pafmini", func_000090C0);

INCLUDE_ASM("nonmatchings/pafmini", func_00009268);

INCLUDE_ASM("nonmatchings/pafmini", func_00009350);

INCLUDE_ASM("nonmatchings/pafmini", func_00009F68);
#endif

#if FW_VERSION == 282
void func_00008D54(void) {
}

INCLUDE_ASM("nonmatchings/pafmini", func_00008D5C);

INCLUDE_ASM("nonmatchings/pafmini", func_00008DE0);

INCLUDE_ASM("nonmatchings/pafmini", func_00008E28);

INCLUDE_ASM("nonmatchings/pafmini", func_00008E70);

s32 func_00008EB8(void) {
    return 0;
}

s32 func_00008EC0(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00008EC8);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000A164);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_000090CC);

INCLUDE_ASM("nonmatchings/pafmini", func_00009178);

INCLUDE_ASM("nonmatchings/pafmini", func_00009234);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", scePaf_BB3CBD19);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_000095E0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/pafmini", func_00009534_v201);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000A590);
#endif

#if FW_VERSION == 282
void func_00009424(struct Unk_func_00009424_0 *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 < 0) {
        var_a1 = D_000E15A8->unk98;
    }
    PAF_Resource_SetLocale(arg0->unk58, var_a1);
}

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12SetLocaleAllE6Locale);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View9GetStringEPKc);

INCLUDE_ASM("nonmatchings/pafmini", func_000094D8);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00009534);

void func_00009554(void) {
    sce_paf_private_free();
}

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View10GetTextureEPv);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_0000A614);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View10GetTextureEPKc);

s32 paf::View::GetModel(char const* cxxp1) const {
    return 0;
}

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View8GetSoundEPKc);

INCLUDE_ASM("nonmatchings/pafmini", func_00009D9C);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View9PlaySoundEPKc);
#endif

#if FW_VERSION == 100
void paf::View::PlaySound(char const* cxxp1) {
    struct Unk_scePaf_49CE42F7_0 *arg0 = (struct Unk_scePaf_49CE42F7_0 *) this;
    char* arg1 = (char*) cxxp1;
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x1D0) == 0) {

    } else {
        temp_v0 = _ZN3paf4View8GetSoundEPKc(arg0, arg1);
        if (temp_v0 != 0) {
            func_00009D9C(arg0, temp_v0);
        }
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void paf::View::PlaySound(char const* cxxp1) {
    struct Unk_scePaf_49CE42F7_0 *arg0 = (struct Unk_scePaf_49CE42F7_0 *) this;
    char* arg1 = (char*) cxxp1;
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x1D4) == 0) {

    } else {
        temp_v0 = _ZN3paf4View8GetSoundEPKc(arg0, arg1);
        if (temp_v0 != 0) {
            func_00009D9C(arg0, temp_v0);
        }
    }
}
#endif

#if FW_VERSION == 282
void paf::View::PlaySound(char const* cxxp1) {
    struct Unk_scePaf_49CE42F7_0 *arg0 = (struct Unk_scePaf_49CE42F7_0 *) this;
    char* arg1 = (char*) cxxp1;
    s32 temp_v0;

    if (arg0->unk1C0 == 0) {

    } else {
        temp_v0 = _ZN3paf4View8GetSoundEPKc(arg0, arg1);
        if (temp_v0 != 0) {
            func_00009D9C(arg0, temp_v0);
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_00009F50);

INCLUDE_ASM("nonmatchings/pafmini", func_00009F74);

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12StopSoundAllEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View9GetWidgetEPv);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_0000B054);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B0CC);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B0EC);
#endif

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View10FindWidgetEPKc);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View15SetDrawPriorityEi);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View10GetTopPageEv);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View13GetBottomPageEv);

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View11ForEachPageEPFbPS0_PvS2_ES2_);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000A25C);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View15SetEventHandlerEPKNS_18EventFunctionEntryE);

INCLUDE_ASM("nonmatchings/pafmini", _ZNK3paf4View12GetInterfaceEi);

INCLUDE_ASM("nonmatchings/pafmini", _ZN3paf4View12SetInterfaceEiPv);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B7E4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B880);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B98C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000B558);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B590);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B638);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000A48C);

INCLUDE_ASM("nonmatchings/pafmini", func_0000A528);

INCLUDE_ASM("nonmatchings/pafmini", func_0000A634);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000A6D0);
#endif

#if FW_VERSION == 100
void func_0000A6D0(struct Unk_func_0000A6D0_0 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1E0) == 0) {
        func_00011C1C(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000A6D0(struct Unk_func_0000A6D0_0 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1E4) == 0) {
        func_00011C1C(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
}
#endif

#if FW_VERSION == 282
void func_0000A6D0(struct Unk_func_0000A6D0_0 *arg0) {
    if (arg0->unk1D0 == 0) {
        func_00011C1C(arg0->unk64);
        arg0->unk64 = 0;
    }
}
#else
INCLUDE_ASM("nonmatchings/pafmini", func_00002464);
#endif

void func_0000A708(void) {
    func_0000AE20();
}

void func_0000A724(void) {
    func_0000AE78();
}

void func_0000A740(void) {
    func_0000AED0();
}

void func_0000A75C(void) {
    func_0000AEFC();
}

void func_0000A778(void) {
    func_0000AF54();
}

void func_0000A794(void) {
    func_0000AF80();
}

void func_0000A7B0(void) {
    func_0000AFD8();
}

void func_0000A7CC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000B004();
}

void func_0000A7EC(void) {
    func_0000B024();
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B7F8);
#endif

#if FW_VERSION < 201
void func_0000B7F8(void) {
    func_0000C0E8();
}
#endif

s32 *func_0000A808(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000B050(arg1, arg2);
    return arg0;
}

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B84C);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_0000A840);
#endif

s32 *func_0000A870(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000B298(arg1, arg2);
    return arg0;
}

void func_0000A8A8(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 == 0) {

    } else {
        func_0000B2F0(arg0, temp_v0 + 0xC);
    }
}

#if FW_VERSION < 282
void func_0000A8F8(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != &D_000E6034) {
        sce_paf_private_free2(temp_v1, arg1);
    }
}

INCLUDE_ASM("nonmatchings/pafmini", func_000340C4);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000A8D8);

#if FW_VERSION == 282
void func_0000A8F8(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != &D_000E6034) {
        sce_paf_private_free2(temp_v1, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000A928);

INCLUDE_ASM("nonmatchings/pafmini", func_0000A9DC);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AA38);

#if FW_VERSION >= 150 && FW_VERSION < 282
void *func_0000D178(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000D35C);
#endif

#if FW_VERSION < 282
s32 *func_0000BBC0(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0000B334(arg1, arg2);
    return arg0;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000BBF8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000AB20);
#endif

s32 *func_0000ABA0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000B334(arg1, arg2);
    return arg0;
}

void func_0000ABD8(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 == 0) {

    } else {
        func_0000B38C(arg0, temp_v0 + 0xC);
    }
}

s32 *func_0000AC08(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000B3D0(arg1, arg2);
    return arg0;
}

void func_0000AC40(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000B4A8();
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000AC60);

INCLUDE_ASM("nonmatchings/pafmini", func_0000ACD8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000BE40);
#else
INCLUDE_ASM("nonmatchings/pafmini", func_0000AD50);
#endif

s32 *func_0000ADB8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000B6B8(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000ADF0);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_00002B94);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000AE20);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AE78);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AED0);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AEFC);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AF54);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AF80);

INCLUDE_ASM("nonmatchings/pafmini", func_0000AFD8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B004);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B024);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000C0E8);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000B050);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000B248);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000C1D4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B128);
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000B298);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B2F0);
#else
void func_0000B2F0(s32 arg0, s32 arg1) {
    struct Unk_func_0000B2F0_temp_v0 *temp_v0;

    temp_v0 = func_0000B298(arg0, arg1);
    if (temp_v0->unk15 != 0) {

    } else {
        func_0000BCD4(arg0, temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000B334);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000C2F0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B38C);
#else
void func_0000B38C(s32 arg0, s32 arg1) {
    struct Unk_func_0000B38C_temp_v0 *temp_v0;

    temp_v0 = func_0000B334(arg0, arg1);
    if (temp_v0->unk15 != 0) {

    } else {
        func_0000BF00(arg0, temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/pafmini", func_0000B3D0);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B4A8);

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000B5AC);
#endif

#if FW_VERSION < 250
s32 *func_0000C45C(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0000B3D0(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000C494);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B6B8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000B7E0);
#endif

#if FW_VERSION < 250
s32 *func_0000C528(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0000B6B8(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000C560);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000C5A4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C63C);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C6C4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C74C);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000BB98);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000C7F8);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000C964);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000CAB4);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000CC38);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000BFC8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C13C);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000CDA4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000CF9C);
#endif

#if FW_VERSION < 282
void *func_0000D108(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}

void *func_0000D140(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 100
void *func_0000D178(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 282
void *func_0000D1B0(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000D1E8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000D35C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000D3CC);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/pafmini", func_0000D5B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000D724);

INCLUDE_ASM("nonmatchings/pafmini", func_0000D794);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/pafmini", func_0000D978);

INCLUDE_ASM("nonmatchings/pafmini", func_0000DAEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000DC60);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000DC60(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 8);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000DCA0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000DCA0(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 4);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 8);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_v1, M2C_UNK **, 8) = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000DCE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000DCE0(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 8);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 4);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg1, M2C_UNK **, 8) = temp_v0;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/pafmini", func_0000DD20);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000DD20(M2C_UNK **arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v0;
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg1, M2C_UNK **, 4);
    temp_a2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    temp_v0 = M2C_FIELD(temp_v1, M2C_UNK **, 8);
    M2C_FIELD(arg1, M2C_UNK **, 0) = temp_v1;
    M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v0;
    M2C_FIELD(temp_v1, M2C_UNK **, 8) = arg1;
    if (temp_v0 != NULL) {
        *temp_v0 = arg1;
    }
    if (temp_a2 == NULL) {
        *arg0 = temp_v1;
    } else if (M2C_FIELD(temp_a2, M2C_UNK **, 4) == arg1) {
        M2C_FIELD(temp_a2, M2C_UNK **, 4) = temp_v1;
    } else {
        M2C_FIELD(temp_a2, M2C_UNK **, 8) = temp_v1;
    }
    M2C_FIELD(temp_v1, M2C_UNK **, 0) = temp_a2;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/pafmini", func_0000B4C8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B6B8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B710);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B880);

INCLUDE_ASM("nonmatchings/pafmini", func_0000B948);

INCLUDE_ASM("nonmatchings/pafmini", func_0000BA04);

INCLUDE_ASM("nonmatchings/pafmini", func_0000BAC0);

INCLUDE_ASM("nonmatchings/pafmini", func_0000BB9C);

INCLUDE_ASM("nonmatchings/pafmini", func_0000BCD4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000BF00);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C148);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C280);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C3B8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C40C);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C460);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C628);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C6A8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C870);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C8C4);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C918);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C96C);

INCLUDE_ASM("nonmatchings/pafmini", func_0000C9C0);

INCLUDE_ASM("nonmatchings/pafmini", func_0000CA14);
#endif

void func_0000CA68(M2C_UNK **arg0) {
    *arg0 = &D_000D1940;
}

void func_0000CA78(M2C_UNK **arg0) {
    *arg0 = &D_000D1940;
    _ZdlPv(arg0);
}

void func_0000CAA0(M2C_UNK **arg0) {
    *arg0 = &D_000D1930;
}

void func_0000CAB0(M2C_UNK **arg0) {
    *arg0 = &D_000D1930;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000CAD8);

INCLUDE_ASM("nonmatchings/pafmini", func_0000CB00);

void func_0000CB28(struct Unk_func_0000CB28_0 *arg0) {
    s32 temp_v0;

    if (arg0->unk14 > 0) {
        do {
            InputDevice_PspPad_Unlock();
            temp_v0 = arg0->unk14 - 1;
            arg0->unk14 = temp_v0;
        } while (temp_v0 > 0);
    }
}

INCLUDE_ASM("nonmatchings/pafmini", func_0000CB68);

void func_0000CBA8(struct Unk_func_0000CBA8_0 *arg0) {
    PAF_Resource_DOMGetNodeFirstChild(arg0->unk8, (u8 *)arg0 + 0xC);
    func_0000CDBC(arg0);
}

void func_0000CBDC(struct Unk_func_0000CBDC_0 *arg0) {
    _ZN3paf9PhHandler11KillTimerCBEi(arg0->unk4, 0x3039);
    if (arg0->unk11 != 0) {
        arg0->unk10 = 1;
    } else if (arg0 != NULL) {
        func_0000CB68(arg0);
        _ZdlPv(arg0);
    }
}

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000E2E8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_v1;
        if (temp_v1 > 0) {
            do {
                InputDevice_PspPad_Unlock();
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
                M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
            } while (temp_v0 > 0);
        }
    }
}

void func_0000E33C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        if (temp_v0 > 0) {
            do {
                InputDevice_PspPad_Lock();
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
                M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_2;
            } while (temp_v0_2 > 0);
        }
    }
}
#endif
