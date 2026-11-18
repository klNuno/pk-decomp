#include "common.h"

extern "C" {

class unk_func_002FC5F0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32);
};

typedef struct unk_func_002FC5F0_1 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_002FC5F0_0 *unk_20;
} unk_func_002FC5F0_1;

void func_002FC5F0(unk_func_002FC5F0_1 *arg0) {
    if (arg0->unk_1C != 0) {
        arg0->unk_20->unk_vf1C(arg0->unk_1C);
    }
}

}
