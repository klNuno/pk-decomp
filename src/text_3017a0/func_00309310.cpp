#include "common.h"

class unk_func_00309310_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual s32 unk_vf10(s32, s32);
};

typedef struct {
    u8 pad_00[0x8];
    unk_func_00309310_1 **unk_08;
    u32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00309310_0;

extern "C" {
s32 func_00309310(unk_func_00309310_0 *arg0, s32 arg1, s32 arg2) {
    switch (arg2) {
    case 0:
        if (arg1 >= (s32)arg0->unk_0C || arg1 < 0) {
            return arg0->unk_10;
        }
        arg1 += arg0->unk_14;
        break;
    case 1:
        if (arg1 > 0) {
            return arg0->unk_10;
        }
        arg2 = 0;
        arg1 += arg0->unk_14 + arg0->unk_0C;
        break;
    case 2:
        if (arg1 + arg0->unk_10 >= arg0->unk_0C) {
            return arg0->unk_10;
        }
        break;
    }
    arg0->unk_10 = (*arg0->unk_08)->unk_vf10(arg1, arg2) - arg0->unk_14;
    return arg0->unk_10;
}
}
