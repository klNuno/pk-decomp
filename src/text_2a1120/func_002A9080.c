/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A9080_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A9080_0;

extern u8 D_007B8488[];
extern unk_func_002A9080_0 D_007B8490;

void func_0029D8F0(s32, unk_func_002A9080_0 *);

inline void func_inl(f32 arg0, f32 arg1, f32 arg2) {
    D_007B8490.unk_00 = arg0;
    D_007B8490.unk_04 = arg1;
    D_007B8490.unk_08 = arg2;
    D_007B8490.unk_0C = 1.0f;
}

void func_002A9080(u8 *arg0) {
    func_inl(arg0[0] / 255.0f, arg0[1] / 255.0f, arg0[2] / 255.0f);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, &D_007B8490);
    }
}
