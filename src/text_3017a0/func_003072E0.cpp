#include "common.h"

class unk_func_003072E0_0 {
public:
    virtual void unk_vf08(s32);
};

typedef struct {
    u8 pad_00[0x18];
    unk_func_003072E0_0 *unk_18;
} unk_func_003072E0_1;

extern "C" {
void func_002D2BB0(...);

void func_003072E0(unk_func_003072E0_1 *arg0);
}

void func_003072E0(unk_func_003072E0_1 *arg0) {
    arg0->unk_18->unk_vf08(-1);
    func_002D2BB0(arg0->unk_18);
    arg0->unk_18 = 0;
}
