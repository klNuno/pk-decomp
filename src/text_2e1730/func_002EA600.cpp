#include "common.h"

class unk_func_002EA600_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
};

extern "C" {
unk_func_002EA600_0 *func_002EA780(...);

void func_002EA600(void) {
    func_002EA780()->unk_vf14();
}
}
