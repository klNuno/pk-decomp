#include "common.h"

class unk_func_002FFA90_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(f32 *, s32, s32);
};

extern "C" {
void func_002FFBD0(s32, f32);

void func_002FFA90(s32 arg0, s32 arg1, unk_func_002FFA90_0 *arg2);
}

void func_002FFA90(s32 arg0, s32 arg1, unk_func_002FFA90_0 *arg2) {
    f32 v;

    arg2->unk_vf0C(&v, 4, 1);
    func_002FFBD0(arg1, v);
}
