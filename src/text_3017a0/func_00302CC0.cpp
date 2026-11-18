#include "common.h"

class unk_func_00302CC0_0 {
public:
    virtual unk_func_00302CC0_0 *unk_vf08();
    virtual void unk_vf0C(s32);
};

extern "C" {
unk_func_00302CC0_0 *func_00302AF0(s32);

unk_func_00302CC0_0 *func_00302CC0(s32 arg0, s32 arg1) {
    unk_func_00302CC0_0 *temp;

    temp = func_00302AF0(arg0)->unk_vf08();
    temp->unk_vf0C(arg1);
    return temp;
}
}
