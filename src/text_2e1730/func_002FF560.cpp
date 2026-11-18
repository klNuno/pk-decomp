#include "common.h"

class unk_func_002FF560_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(s8 *, s32, s32);
};

extern "C" {
void func_002FF6D0(s32, s8);
void func_002FF560(s32 arg0, s32 arg1, unk_func_002FF560_0 *arg2);
}

extern "C" void func_002FF560(s32 arg0, s32 arg1, unk_func_002FF560_0 *arg2) {
    s8 sp2F;

    arg2->unk_vf0C(&sp2F, 1, 1);
    func_002FF6D0(arg1, sp2F);
}
