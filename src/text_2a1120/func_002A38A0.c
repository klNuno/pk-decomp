/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A38A0_0;

void func_0029D8F0(s32, unk_func_002A38A0_0 *);
extern u8 D_007B8488[];
extern unk_func_002A38A0_0 D_007B84C0;

static inline void func_002A38A0_inl(unk_func_002A38A0_0 *v, f32 x, f32 y, f32 z) {
    v->unk_00 = x;
    v->unk_04 = y;
    v->unk_08 = z;
    v->unk_0C = 0.0f;
}

void func_002A38A0(s32 *arg0) {
    func_002A38A0_inl(&D_007B84C0, arg0[0] / 2147483648.0f, arg0[1] / 2147483648.0f, arg0[2] / 2147483648.0f);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, &D_007B84C0);
    }
}
