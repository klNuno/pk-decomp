/* profile: opt_300 */
#include "common.h"

class unk_func_003005B0_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

extern "C" {
void func_002FEDB0(...);
s32 func_003007F0(...);
s32 func_002EA780(...);
s32 func_002EA770(...);

void func_003005B0(s32 arg0, s32 arg1, unk_func_003005B0_0 *arg2) {
    s32 sp3C;

    func_002FEDB0();
    sp3C = func_003007F0(arg1);
    if (func_002EA770(func_002EA780()) == 1) {
        sp3C = (sp3C << 24) | (((sp3C << 8) & 0xFF0000) | ((sp3C >> 24) | ((sp3C >> 8) & 0xFF00)));
    }
    arg2->unk_vf08(&sp3C, 4, 1);
}
}
