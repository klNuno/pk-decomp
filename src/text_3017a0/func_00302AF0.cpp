/* profile: opt_300 */
#include "common.h"

namespace usnd {
class CFloatVarType { public: static s32 fs_roGetInst(); };
class CStringVarType { public: static s32 fs_roGetInst(); };
class CBoolVarType { public: static s32 fs_roGetInst(); };
class CCharVarType { public: static s32 fs_roGetInst(); };
}

extern "C" {
class unk_func_00302AF0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, u32, u32);
};

void func_002D0DA0(s32 *, s32 *);
void c4sdk_malloc(s32 *, s32);
s32 func_00300400();
s32 func_003010C0();
s32 func_00300E30(s32, s32 *);
void func_003044A0(unk_func_00302AF0_0 *, s32 *);

s32 func_00302AF0(s32 arg0, unk_func_00302AF0_0 &arg1) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 ret;

    func_002D0DA0(&sp28, &sp2C);
    arg1.unk_vf0C(&sp20, sizeof(sp20), 1);
    switch (sp20) {
    case 0:
        arg1.unk_vf0C(&sp24, sizeof(sp24), 1);
        switch (sp24) {
        case 0:
            ret = func_00300400();
            c4sdk_malloc(&sp28, 0);
            return ret;
        case 1:
            ret = usnd::CFloatVarType::fs_roGetInst();
            c4sdk_malloc(&sp28, 0);
            return ret;
        case 2:
            ret = usnd::CStringVarType::fs_roGetInst();
            c4sdk_malloc(&sp28, 0);
            return ret;
        case 3:
            ret = usnd::CBoolVarType::fs_roGetInst();
            c4sdk_malloc(&sp28, 0);
            return ret;
        case 4:
            ret = usnd::CCharVarType::fs_roGetInst();
            c4sdk_malloc(&sp28, 0);
            return ret;
        }
        break;
    case 3:
        func_003044A0(&arg1, &sp28);
        ret = func_00300E30(func_003010C0(), &sp28);
        c4sdk_malloc(&sp28, 0);
        return ret;
    case 1:
    case 2:
        break;
    }
    c4sdk_malloc(&sp28, 0);
    return 0;
}
}
