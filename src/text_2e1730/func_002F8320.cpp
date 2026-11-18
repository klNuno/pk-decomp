#include "common.h"

extern "C" {
void func_00308B80(s32);
void func_00308BE0(s32);
}

class unk_func_002F8320_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(void *, s32);
};

typedef struct {
    u8 pad_00[0x7C];
    s32 unk_7C;
    unk_func_002F8320_0 *unk_80;
    u8 pad_84[0xC];
    s32 unk_90;
} unk_func_002F8320_1;

extern "C" {
void func_002F8320(unk_func_002F8320_1 *arg0) {
    unk_func_002F8320_0 *var_s0;

    if (arg0->unk_90 != 0) {
        func_00308BE0(arg0->unk_90);
    }
    var_s0 = 0;
    if (arg0->unk_80 != 0) {
        var_s0 = arg0->unk_80;
        arg0->unk_80 = 0;
    }
    if (arg0->unk_90 != 0) {
        func_00308B80(arg0->unk_90);
    }
    if (var_s0 != 0) {
        var_s0->unk_vf10(arg0, arg0->unk_7C);
        var_s0->unk_vf08();
    }
}
}
