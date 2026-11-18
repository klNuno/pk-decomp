#include "common.h"

class unk_func_00139290_0 {
public:
    f32 unk_00[3];
    f32 &x() { return unk_00[0]; }
    f32 &y() { return unk_00[1]; }
    f32 &z() { return unk_00[2]; }
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00139290_2;

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x38];
    u8 unk_48[0x98];
    u8 unk_E0[4];
} unk_func_00139290_1;

extern "C" {
void func_00150270(u8 *, unk_func_00139290_0 *);
f32 func_001E60E0(f32);
s32 func_00155EE0(u8 *);
void func_00152040(u8 *, s32, unk_func_00139290_0 *, unk_func_00139290_0 *, unk_func_00139290_0 *, s32);
void func_001565B0(u8 *, u8 *);
void func_00148060(unk_func_00139290_1 *);
}

static inline void unk_inline_0(unk_func_00139290_0 &out, unk_func_00139290_0 &u, unk_func_00139290_0 &v) {
    if (&out == &u || &out == &v) {
        unk_func_00139290_0 t;
        t.x() = u.y() * v.z() - u.z() * v.y();
        t.y() = u.z() * v.x() - u.x() * v.z();
        t.z() = u.x() * v.y() - u.y() * v.x();
        *(unk_func_00139290_2 *)&out.x() = *(unk_func_00139290_2 *)&t.x();
    } else {
        out.x() = u.y() * v.z() - u.z() * v.y();
        out.y() = u.z() * v.x() - u.x() * v.z();
        out.z() = u.x() * v.y() - u.y() * v.x();
    }
}

static inline void unk_inline_1(unk_func_00139290_0 &out, unk_func_00139290_0 &in) {
    f32 len;
    f32 y = in.y();
    f32 x = in.x();
    f32 z = in.z();
    len = func_001E60E0(x * x + y * y + z * z);
    if (len != 0.0f) {
        f32 inv = 1.0f / len;
        out.x() = inv * in.x();
        out.y() = inv * in.y();
        out.z() = inv * in.z();
    } else {
        out = in;
    }
}

extern "C" {
void func_00139290(unk_func_00139290_1 *arg0, unk_func_00139290_0 *arg1) {
    u8 *m;
    unk_func_00139290_0 mtx[3];

    if ((arg0->unk_0C & 0x80 ? 1 : 0) != 0) {
        return;
    }
    if (arg1->x() == 0.0f && arg1->y() == 0.0f && arg1->z() == 0.0f) {
        return;
    }
    m = arg0->unk_E0;
    func_00150270(m, mtx);
    unk_inline_1(mtx[1], *arg1);
    mtx[1].x() = -mtx[1].x();
    mtx[1].y() = -mtx[1].y();
    mtx[1].z() = -mtx[1].z();
    unk_inline_0(mtx[0], mtx[1], mtx[2]);
    unk_inline_0(mtx[1], mtx[2], mtx[0]);
    func_00152040(m, 5, mtx, &mtx[1], &mtx[2], func_00155EE0(m));
    func_001565B0(m, arg0->unk_48);
    if ((arg0->unk_0C & 4 ? 1 : 0) != 0) {
        func_00148060(arg0);
    }
}
}
