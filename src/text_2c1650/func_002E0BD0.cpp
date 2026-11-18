#include "common.h"

extern "C" {

class unk_func_002E0BD0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

unk_func_002E0BD0_0 *func_002DE810();

void func_002E0BD0(void) {
    func_002DE810()->unk_vf0C(0x3ED, 0);
}

}
