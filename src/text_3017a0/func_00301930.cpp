/* profile: opt_300 */
#include "common.h"

extern "C" {
class unk_func_00301930_1 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

typedef struct unk_func_00301930_0 {
    u8 pad_00[4];
    u32 unk_04;
} unk_func_00301930_0;

s32 func_002EA780();
s32 func_002EA770(s32);

void func_00301930(unk_func_00301930_0 *arg0, unk_func_00301930_1 *arg1) {
    u32 sp2C = arg0->unk_04;

    if (func_002EA770(func_002EA780()) == 1) {
        sp2C = (sp2C << 24) | (((sp2C << 8) & 0xFF0000) | ((sp2C >> 24) | ((sp2C >> 8) & 0xFF00)));
    }
    arg1->unk_vf08(&sp2C, 4, 1);
}
}
