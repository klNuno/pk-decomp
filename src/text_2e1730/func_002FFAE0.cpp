/* profile: opt_300 */
#include "common.h"

class unk_func_002FFAE0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

extern "C" {
f32 func_002CD650(s32);
s32 func_002EA770(s32);
s32 func_002EA780(void);
}

inline f32 func_002FFAE0_inl(f32 f) {
    void *pf = &f;
    long x = *(long *)pf;
    long y = (x << 24) | (((x << 8) & 0xFF0000) | ((x >> 24) | ((x >> 8) & 0xFF00)));
    void *py = &y;
    f = *(f32 *)py;
    return f;
}

extern "C" void func_002FFAE0(s32 arg0, s32 arg1, unk_func_002FFAE0_0 *arg2) {
    f32 v = func_002CD650(arg1);

    if (func_002EA770(func_002EA780()) == 1) {
        v = func_002FFAE0_inl(v);
    }
    arg2->unk_vf08(&v, 4, 1);
}
