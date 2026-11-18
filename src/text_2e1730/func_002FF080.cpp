#include "common.h"

class unk_func_002FF080_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(s32 *, s32, s32);
};

extern "C" {
void func_002FF240(s32, s32);

void func_002FF080(s32 arg0, s32 arg1, unk_func_002FF080_0 *arg2);
}

void func_002FF080(s32 arg0, s32 arg1, unk_func_002FF080_0 *arg2) {
    s32 v;

    arg2->unk_vf0C(&v, 4, 1);
    func_002FF240(arg1, v != 0);
}
