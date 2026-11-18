#include "common.h"

class unk_func_00306790_0 {
public:
    virtual void unk_vf08(s32);
};

extern "C" {
void func_002D2BB0(...);

void func_00306790(u8 *arg0) {
    (*(unk_func_00306790_0 **)(arg0 + 0x1C))->unk_vf08(-1);
    func_002D2BB0(*(unk_func_00306790_0 **)(arg0 + 0x1C));
    *(unk_func_00306790_0 **)(arg0 + 0x1C) = 0;
}
}
