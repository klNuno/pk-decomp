#include "common.h"

class unk_func_0018EB60_1 {
public:
    s32 unk_00;
    u8 pad_04[0xC];
    virtual void unk_vf08();
};

struct unk_func_0018EB60_0 {
    u8 pad_00[0x8];
    u32 unk_08;
    u8 pad_0C[0xC];
    unk_func_0018EB60_1 **unk_18;
};

extern "C" {
void func_0018EB60(unk_func_0018EB60_0 *arg0) {
    u32 i;

    for (i = 0; i < arg0->unk_08; i++) {
        if (arg0->unk_18[i]->unk_00 == 4) {
            arg0->unk_18[i]->unk_vf08();
        }
    }
}
}
