#include "common.h"

class unk_func_002F5220_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

extern "C" {
void func_002F5220(u8 *arg0, unk_func_002F5220_0 *arg1) {
    arg1->unk_vf0C(arg0, 4, 1);
    arg1->unk_vf0C(arg0 + 4, 4, 1);
}
}
