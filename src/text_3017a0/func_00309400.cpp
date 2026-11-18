#include "common.h"

class unk_func_00309400_2 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
    virtual void unk_vf10(s32, s32);
};

class unk_func_00309400_1 {
public:
    unk_func_00309400_2 *unk_00;
    virtual void unk_vf08();
    virtual u32 unk_vf0C(s32, u32, u32);
};

typedef struct unk_func_00309400_0 {
    u8 pad_00[8];
    unk_func_00309400_1 *unk_08;
    u32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00309400_0;

extern "C" {
u32 func_00309400(unk_func_00309400_0 *arg0, s32 arg1, u32 arg2, u32 arg3) {
    u32 total;

    total = arg2 * arg3;
    if (total == 0) {
        return 0;
    }
    s32 pos = arg0->unk_08->unk_00->unk_vf0C() - arg0->unk_10;
    if (pos != arg0->unk_14) {
        arg0->unk_08->unk_00->unk_vf10(arg0->unk_14 + arg0->unk_10, 0);
    }
    if (arg0->unk_0C < total + arg0->unk_10) {
        total = arg0->unk_0C - arg0->unk_10;
        total -= total % arg2;
    }
    arg3 = arg0->unk_08->unk_vf0C(arg1, arg2, total / arg2);
    arg0->unk_10 += arg2 * arg3;
    return arg3;
}
}
