#include "common.h"

class unk_func_002F20D0_0 {
public:
    u8 pad_00[4];
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

extern "C" {
void func_002F4E50(...);

void func_002F20D0(u8 *arg0, unk_func_002F20D0_0 *arg1) {
    func_002F4E50();
    arg1->unk_vf0C(arg0 + 0x10, 4, 1);
}
}
