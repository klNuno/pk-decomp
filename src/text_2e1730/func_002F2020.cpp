/* profile: opt_300 */
#include "common.h"

struct unk_func_002F2020_2 {
    u8 pad_00[8];
    u32 unk_08;
};

class unk_func_002F2020_0 {
public:
    virtual void unk_vf08();
    virtual unk_func_002F2020_2 *unk_vf0C();
};

class unk_func_002F2020_1 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

extern "C" {
void func_002F4E40(...);
s32 func_002EA780(...);
s32 func_002EA770(...);

void func_002F2020(unk_func_002F2020_0 *arg0, unk_func_002F2020_1 *arg1) {
    u32 sp3C;

    func_002F4E40();
    sp3C = arg0->unk_vf0C()->unk_08;
    if (func_002EA770(func_002EA780()) == 1) {
        sp3C = (sp3C << 24) | (((sp3C << 8) & 0xFF0000) | ((sp3C >> 24) | ((sp3C >> 8) & 0xFF00)));
    }
    arg1->unk_vf08(&sp3C, 4, 1);
}
}
