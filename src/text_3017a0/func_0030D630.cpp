/* profile: opt */
#include "common.h"

extern "C" {
void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 D_00360870;
extern s32 D_007DC190[];
extern s32 D_007DE190[];
}

static inline s32 func_0030D630_eq(u32 a, u32 b) {
    return (a & ~0x3FF) == (b & ~0x3FF);
}

static inline bool func_0030D630_inl(u32 h) {
    bool ok = h != 0;
    if (ok) {
        ok = func_0030D630_eq(h, D_007DE190[h & 0x3FF]);
    }
    return ok;
}

extern "C" s32 func_0030D630(u32 arg0) {
    s32 ret;

    ret = 0;
    if (D_00360870 != 0) {
        func_00308BE0(D_00360870);
    }
    if (func_0030D630_inl(arg0)) {
        if (!(D_007DE190[arg0 & 0x3FF] & 1)) {
            ret = D_007DC190[arg0 & 0x3FF];
        }
    }
    if (D_00360870 != 0) {
        func_00308B80(D_00360870);
    }
    return ret;
}
