#include "common.h"

class unk_func_00300650_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(s32 *, s32, s32);
};

extern "C" {
void func_00300800(s32, s32);
void func_00300650(s32 arg0, s32 arg1, unk_func_00300650_0 *arg2);
}

extern "C" void func_00300650(s32 arg0, s32 arg1, unk_func_00300650_0 *arg2) {
    s32 sp2C;

    arg2->unk_vf0C(&sp2C, 4, 1);
    func_00300800(arg1, sp2C);
}
