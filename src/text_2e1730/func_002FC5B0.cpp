#include "common.h"

class unk_func_002FC5B0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual s32 unk_vf2C(s32);
};

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_002FC5B0_0 *unk_20;
} unk_func_002FC5B0_1;

extern "C" {
s32 func_002FC5B0(unk_func_002FC5B0_1 *arg0) {
    if (arg0->unk_1C == 0) {
        return 0;
    }
    return arg0->unk_20->unk_vf2C(arg0->unk_1C);
}
}
