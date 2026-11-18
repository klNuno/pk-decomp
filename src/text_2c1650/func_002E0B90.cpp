#include "common.h"

class unk_func_002E0B90_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

extern "C" {
unk_func_002E0B90_0 *func_002DE810(...);

void func_002E0B90(void) {
    func_002DE810()->unk_vf0C(0x3EC, 0);
}
}
