#include "common.h"

class unk_func_002F7EC0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14(s32);
};

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_002F7EC0_0 *unk_20;
} unk_func_002F7EC0_1;

extern "C" {
void func_002F7EC0(unk_func_002F7EC0_1 *arg0);
}

void func_002F7EC0(unk_func_002F7EC0_1 *arg0) {
    if (arg0->unk_1C != 0) {
        arg0->unk_20->unk_vf14(arg0->unk_1C);
        arg0->unk_1C = 0;
    }
}
