#include "common.h"

class unk_func_002F0940_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
};

struct unk_func_002F0940_0 {
    u8 pad_00[0x10];
    unk_func_002F0940_1 *unk_10;
    s32 unk_14;
};

extern "C" {
void func_002D2BA0(void *, void *, u32);
void func_002D2BB0(void *);
unk_func_002F0940_1 *func_002D2BC0(s32);

void func_002F0940(unk_func_002F0940_0 *arg0, unk_func_002F0940_1 *arg1, s32 arg2, s32 arg3) {
    if (arg0->unk_14 == -1) {
        arg0->unk_10->unk_vf08();
    } else if (arg0->unk_14 > 0) {
        func_002D2BB0(arg0->unk_10);
    }
    arg0->unk_14 = arg2;
    if (arg0->unk_14 > 0) {
        arg0->unk_10 = func_002D2BC0(arg0->unk_14);
        func_002D2BA0(arg0->unk_10, arg1, arg0->unk_14);
    } else {
        arg0->unk_10 = arg1;
        if (arg0->unk_14 == -1 && arg3 != 0) {
            arg0->unk_10->unk_vf0C();
        }
    }
}
}
