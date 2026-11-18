/* profile: opt_300 */
#include "common.h"

class unk_func_00300AD0_0 {
public:
    u8 pad_00[4];
    virtual void unk_vf08(void *, u32, s32);
};

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
} unk_func_00300AD0_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00300AD0_1 *unk_0C;
} unk_func_00300AD0_2;

extern "C" {
void func_00301930(unk_func_00300AD0_2 *, unk_func_00300AD0_0 *);
s32 func_002EA780();
s32 func_002EA770(s32);

void func_00300AD0(unk_func_00300AD0_2 *arg0, unk_func_00300AD0_0 *arg1) {
    u32 n;
    u32 sp4C;

    func_00301930(arg0, arg1);
    n = arg0->unk_0C->unk_00;
    sp4C = n;
    if (func_002EA770(func_002EA780()) == 1) {
        sp4C = (sp4C >> 24) | ((sp4C >> 8) & 0xFF00) | ((sp4C << 8) & 0xFF0000) | (sp4C << 24);
    }
    arg1->unk_vf08(&sp4C, 4, 1);
    if (n != 0) {
        arg1->unk_vf08(arg0->unk_0C->unk_0C, arg0->unk_0C->unk_00, 1);
    }
}
}
