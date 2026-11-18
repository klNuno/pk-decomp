/* profile: opt_300 */
#include "common.h"

class unk_func_002FF9D0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

inline f32 func_002FF9D0_inl(f32 *arg0) {
    s64 sp30;
    s64 temp = *(s64 *)arg0;
    sp30 = (temp >> 24) | ((temp >> 8) & 0xFF00) | ((temp << 8) & 0xFF0000) | (temp << 24);
    return *(f32 *)&sp30;
}

extern "C" {
f32 func_002DA230(s32);
s32 func_002EA770(s32);
s32 func_002EA780(void);
void func_002FEDB0(s32);

void func_002FF9D0(s32 arg0, s32 arg1, unk_func_002FF9D0_0 *arg2) {
    f32 sp38;

    func_002FEDB0(arg0);
    sp38 = func_002DA230(arg1);
    if (func_002EA770(func_002EA780()) == 1) {
        f32 sp3C = sp38;
        sp3C = func_002FF9D0_inl(&sp3C);
        sp38 = sp3C;
    }
    arg2->unk_vf08(&sp38, 4, 1);
}
}
