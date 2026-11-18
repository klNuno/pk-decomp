#include "common.h"

class unk_func_00313860_0 {
public:
    u8 pad_00[0x60];
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32, void *, s32, f32);
    virtual void unk_vf14(s32, void *, s32, f32);
};

extern "C" {
extern unk_func_00313860_0 *D_003608AC;
void func_003198B0(unk_func_00313860_0 *, void *, s32);

s32 func_00313860(s32 arg0, s32 arg1, s32 arg2, void *arg3, f32 arg4) {
    if (*(s32 *)((u8 *)arg3 + 0x38) != 0) {
        func_003198B0(D_003608AC, arg3, arg1);
    }
    D_003608AC->unk_vf10(arg2, arg3, arg1, arg4);
    D_003608AC->unk_vf14(arg2, arg3, arg1, arg4);
    return arg0;
}
}
