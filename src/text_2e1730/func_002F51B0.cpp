#include "common.h"

class unk_func_002F51B0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(...);
};

extern "C" {
void func_002F51B0(u8 *arg0, unk_func_002F51B0_0 *arg1) {
    arg1->unk_vf08(arg0, 4, 1);
    arg1->unk_vf08(arg0 + 4, 4, 1);
}
}
