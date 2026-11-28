/* lang: c++ */
#include "common.h"
#include "paf_decls.h"

void func_000E9248(M2C_UNK **arg0) {
    *arg0 = &D_0019A7B8;
    _ZN3paf8PhWidgetD2Ev((s32) arg0);
    _ZdlPv(arg0);
}

void _ZN3paf7PhMicon8SetMovieERKNS_10MiconRCPtrINS_13MovieResourceEEE(struct Unk_scePaf_95708BC0_0 *arg0) {
    func_000FF94C(arg0->unk1E8);
}

void _ZNK3paf7PhMicon8GetMovieERNS_10MiconRCPtrINS_13MovieResourceEEE(struct Unk_scePaf_DEF9EBE7_0 *arg0) {
    func_000FF9BC(arg0->unk1E8);
}

void _ZN3paf7PhMicon8SetMusicERKNS_10MiconRCPtrINS_13MusicResourceEEE(struct Unk_scePaf_C85155C9_0 *arg0) {
    func_000FF9E4(arg0->unk1E8);
}

void _ZNK3paf7PhMicon8GetMusicERNS_10MiconRCPtrINS_13MusicResourceEEE(struct Unk_scePaf_F23F3226_0 *arg0) {
    func_000FFA54(arg0->unk1E8);
}

void _ZN3paf7PhMicon10SetBGColorERK4vec4(struct Unk_scePaf_D153385E_0 *arg0) {
    func_000FFA7C(arg0->unk1E8);
}

void paf::PhMicon::GetBGColor() const {
    struct Unk_scePaf_86A5AE7D_0 *arg0 = (struct Unk_scePaf_86A5AE7D_0 *) this;
    func_000FFAA0(arg0->unk1E8);
}

void _ZNK3paf7PhMicon9IsPlayingEi(struct Unk_scePaf_5A8D4BDB_0 *arg0) {
    func_000FFAA8(arg0->unk1E8);
}

void paf::PhMicon::Play() {
    struct Unk_scePaf_2120282A_0 *arg0 = (struct Unk_scePaf_2120282A_0 *) this;
    func_000FFB04(arg0->unk1E8);
}

void paf::PhMicon::Stop() {
    struct Unk_scePaf_8159EB28_0 *arg0 = (struct Unk_scePaf_8159EB28_0 *) this;
    func_000FFB44(arg0->unk1E8);
}

void _ZN3paf7PhMicon11SetChannelsEi(struct Unk_scePaf_5CE11C03_0 *arg0) {
    func_000FFB80(arg0->unk1E8);
}

void paf::PhMicon::GetChannels() const {
    struct Unk_scePaf_05073826_0 *arg0 = (struct Unk_scePaf_05073826_0 *) this;
    func_000FFB88(arg0->unk1E8);
}

void _ZN3paf7PhMicon9SetRepeatEi(struct Unk_scePaf_A4B48F00_0 *arg0) {
    func_000FFB90(arg0->unk1E8);
}

void paf::PhMicon::GetRepeat() const {
    struct Unk_scePaf_224C33F0_0 *arg0 = (struct Unk_scePaf_224C33F0_0 *) this;
    func_000FFBEC(arg0->unk1E8);
}

void _ZN3paf7PhMicon9SetVolumeEf(struct Unk_scePaf_3DBE861F_0 *arg0) {
    func_000FFBF4(arg0->unk1E8);
}

void paf::PhMicon::GetVolume() const {
    struct Unk_scePaf_FA78AF39_0 *arg0 = (struct Unk_scePaf_FA78AF39_0 *) this;
    func_000FFC50(arg0->unk1E8);
}

void _ZN3paf7PhMicon7SetLoopEff(struct Unk_scePaf_A3761F27_0 *arg0) {
    func_000FFC58(arg0->unk1E8);
}

void paf::PhMicon::GetLoop() const {
    struct Unk_scePaf_DE75C2BA_0 *arg0 = (struct Unk_scePaf_DE75C2BA_0 *) this;
    func_000FFC8C(arg0->unk1E8);
}

void _ZN3paf7PhMicon6EnableEib(struct Unk_scePaf_4129A915_0 *arg0, s32 arg1, s32 arg2) {
    func_000FFCB0(arg0->unk1E8, arg1, arg2 & 0xFF);
}

void _ZNK3paf7PhMicon9IsEnabledEi(struct Unk_scePaf_8A51BA1E_0 *arg0) {
    func_000FFCD8(arg0->unk1E8);
}

void paf::PhMicon::GetWidth() const {
    struct Unk_scePaf_0FFA3ECE_0 *arg0 = (struct Unk_scePaf_0FFA3ECE_0 *) this;
    func_000FFCE4(arg0->unk1E8);
}

void paf::PhMicon::GetHeight() const {
    struct Unk_scePaf_89582FD0_0 *arg0 = (struct Unk_scePaf_89582FD0_0 *) this;
    func_000FFD00(arg0->unk1E8);
}

void paf::PhMicon::GetTime() const {
    struct Unk_scePaf_84913A3A_0 *arg0 = (struct Unk_scePaf_84913A3A_0 *) this;
    func_000FFD1C(arg0->unk1E8);
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E66C4);

INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E67E4);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E9368);

INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E9394_v280);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/paf_0E9248", _ZNK3paf10PhMenuList9IsInheritEPKc);

INCLUDE_ASM("nonmatchings/paf_0E9248", _ZNK3paf10PhMenuList13GetWidgetTypeEv);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E94EC);
#endif
