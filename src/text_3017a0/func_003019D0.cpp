/* profile: opt_noexc */
#include "common.h"

class unk_func_003019D0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32);
};

extern "C" {
void func_003019D0(unk_func_003019D0_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk_vf1C(arg2);
}
}
