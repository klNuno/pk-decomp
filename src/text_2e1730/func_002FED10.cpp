/* profile: opt_300 */
#include "common.h"

class unk_func_002FED10_0 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32, s32);
};

typedef struct unk_func_002FED10_1 {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_002FED10_1;

extern "C" {
void func_00301930();
s32 func_002EA780();
s32 func_002EA770(s32);

void func_002FED10(unk_func_002FED10_1 *arg0, unk_func_002FED10_0 *arg1) {
    u32 sp3C;
    func_00301930();
    sp3C = arg0->unk_0C;
    if (func_002EA770(func_002EA780()) == 1) {
        sp3C = (sp3C << 0x18) | (((sp3C << 8) & 0xFF0000) | ((sp3C >> 0x18) | ((sp3C >> 8) & 0xFF00)));
    }
    arg1->unk_vf08(&sp3C, 4, 1);
}
}
