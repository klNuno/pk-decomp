/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002952B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002952B0_0;

typedef struct unk_func_002952B0_1 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_func_002952B0_1;

extern unk_func_002952B0_0 D_007B8420[];

static inline void func_002952B0_inl(unk_func_002952B0_0 *v, f32 x, f32 y, f32 z) {
    v->unk_00 = x;
    v->unk_04 = y;
    v->unk_08 = z;
    v->unk_0C = 1.0f;
}

void func_002952B0(s32 arg0, unk_func_002952B0_1 *arg1) {
    func_002952B0_inl(&D_007B8420[arg0], arg1->unk_00 / 4294967296.0f, arg1->unk_04 / 4294967296.0f, arg1->unk_08 / 4294967296.0f);
}
