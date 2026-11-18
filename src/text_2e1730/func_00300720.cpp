/* profile: opt_300 */
#include "common.h"

extern "C" {
class unk_func_00300720_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

s32 func_002EA780();
s32 func_002EA770(s32);
s32 func_00300850(s32);

void func_00300720(s32 arg0, s32 arg1, unk_func_00300720_0 *arg2) {
    s32 sp2C = func_00300850(arg1);

    if (func_002EA770(func_002EA780()) == 1) {
        sp2C = (sp2C << 24) | (((sp2C << 8) & 0xFF0000) | ((sp2C >> 24) | ((sp2C >> 8) & 0xFF00)));
    }
    arg2->unk_vf08(&sp2C, 4, 1);
}
}
