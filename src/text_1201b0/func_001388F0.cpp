/* profile: opt_300_noprop */
#include "common.h"

class unk_func_001388F0_0 {
public:
    f32 unk_00[3];
    f32 &operator[](s32 i) { return unk_00[i]; }
    unk_func_001388F0_0 &operator=(const unk_func_001388F0_0 &o) {
        ((s32 *)unk_00)[0] = ((s32 *)o.unk_00)[0];
        ((s32 *)unk_00)[1] = ((s32 *)o.unk_00)[1];
        ((s32 *)unk_00)[2] = ((s32 *)o.unk_00)[2];
        return *this;
    }
    void cross(unk_func_001388F0_0 &a, unk_func_001388F0_0 &b) {
        if (this == &a || this == &b) {
            unk_func_001388F0_0 t;
            t[0] = a[1] * b[2] - a[2] * b[1];
            t[1] = a[2] * b[0] - a[0] * b[2];
            t[2] = a[0] * b[1] - a[1] * b[0];
            *this = t;
        } else {
            (*this)[0] = a[1] * b[2] - a[2] * b[1];
            (*this)[1] = a[2] * b[0] - a[0] * b[2];
            (*this)[2] = a[0] * b[1] - a[1] * b[0];
        }
    }
    void scale(f32 s) {
        (*this)[0] = s * (*this)[0];
        (*this)[1] = s * (*this)[1];
        (*this)[2] = s * (*this)[2];
    }
    void add(unk_func_001388F0_0 &a) {
        (*this)[0] = (*this)[0] + a[0];
        (*this)[1] = (*this)[1] + a[1];
        (*this)[2] = (*this)[2] + a[2];
    }
    f32 dot(unk_func_001388F0_0 &b) {
        f32 y = (*this)[1] * b[1];
        f32 x = (*this)[0] * b[0];
        return x + y + (*this)[2] * b[2];
    }
};

typedef struct unk_func_001388F0_1 {
    f32 unk_00;
    unk_func_001388F0_0 unk_04;
} unk_func_001388F0_1;

extern "C" {
f32 func_00114D70(f32);
f32 func_00115110(f32);

unk_func_001388F0_0 *func_001388F0(unk_func_001388F0_1 *arg0, unk_func_001388F0_0 *arg1, unk_func_001388F0_0 *arg2) {
    unk_func_001388F0_0 c;
    unk_func_001388F0_0 p;
    f32 angle = arg0->unk_00;
    f32 cs = func_00114D70(angle);
    f32 sn = func_00115110(angle);
    unk_func_001388F0_0 &axis = arg0->unk_04;

    c.cross(axis, *arg1);
    c.scale(sn);
    f32 d = axis.dot(*arg1);
    p = axis;
    p.scale((1.0f - cs) * d);
    if (arg1 != arg2) {
        *arg2 = *arg1;
    }
    arg2->scale(cs);
    arg2->add(p);
    arg2->add(c);
    return arg2;
}
}
