#ifndef PAF_H
#define PAF_H
/* paf (PSP application framework, flash0:/vsh/module/paf.prx) classes used by
   VSH modules. Only the members a module uses are declared; names are from the
   mangled imports, layouts and virtual slots from the 1.00 asm. */

#include "common.h"

#ifdef __cplusplus

/* forward declarations (tools/cxx_methods.py) */
namespace paf { class PhEvent; }
class vec4;

/* placeholder virtual slot: keeps later virtuals at their vtable offset */
#define PAF_VSLOT(n) virtual void vslot_##n()

namespace paf {

/* reference-counted surface (texture image): refCount at +4, virtual dtor */
class Surface {
public:
    virtual ~Surface();

    s32 refCount;
};

/* intrusive smart pointer; the destructor releases inline, the constructor,
   operator=(T *) and AddRef are out-of-line template instances in the module */
template <class T> class SurfaceRCPtr {
public:
    SurfaceRCPtr(T *p = 0);
    ~SurfaceRCPtr() {
        if (ptr != 0 && --ptr->refCount <= 0) {
            delete ptr;
        }
    }
    SurfaceRCPtr &operator=(T *p);
    void AddRef();

    T *ptr;
};

class View;

class PhWidget {
public:
    virtual ~PhWidget();
    PAF_VSLOT(02); PAF_VSLOT(03); PAF_VSLOT(04); PAF_VSLOT(05); PAF_VSLOT(06); PAF_VSLOT(07);
    PAF_VSLOT(08); PAF_VSLOT(09); PAF_VSLOT(0A); PAF_VSLOT(0B); PAF_VSLOT(0C); PAF_VSLOT(0D);
    PAF_VSLOT(0E); PAF_VSLOT(0F); PAF_VSLOT(10); PAF_VSLOT(11); PAF_VSLOT(12); PAF_VSLOT(13);
    PAF_VSLOT(14); PAF_VSLOT(15); PAF_VSLOT(16); PAF_VSLOT(17); PAF_VSLOT(18); PAF_VSLOT(19);
    PAF_VSLOT(1A); PAF_VSLOT(1B); PAF_VSLOT(1C); PAF_VSLOT(1D); PAF_VSLOT(1E);
    virtual int SetStyle(int id, int style, int value);    /* +0x7C (name guessed) */
    PAF_VSLOT(20); PAF_VSLOT(21); PAF_VSLOT(22); PAF_VSLOT(23); PAF_VSLOT(24); PAF_VSLOT(25);
    PAF_VSLOT(26); PAF_VSLOT(27); PAF_VSLOT(28); PAF_VSLOT(29);
#if FW_VERSION >= 250
    PAF_VSLOT(29b);
#endif
    virtual int SetTexture(const SurfaceRCPtr<Surface> &tex, int id); /* +0xA8 (1.00), +0xAC (2.50+) */
    s32 IsInherit(char const*) const;
    s32 WidgetType();
    void SetScale_ontimer(vec4 const&);
    s32 HandleFocusSwitchEvent(paf::PhEvent*);
    void UpdateCameras();
};

class View {
public:
    SurfaceRCPtr<Surface> GetTexture(const char *name) const;
    void PageOpen(char const*, int, int);
    void PageClose(char const*);
    void PageActivate(char const*);
    void PageInactivate(char const*);
    void PlaySound(char const*);
    s32 GetModel(char const*) const;
};

} // namespace paf

#endif /* __cplusplus */

#endif
