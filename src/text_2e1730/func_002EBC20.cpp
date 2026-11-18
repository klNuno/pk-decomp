#include "common.h"

class unk_func_002EBC20_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
};

extern "C" {
void func_003020B0(...);
void func_002EBF00(...);

void func_002EBC20(unk_func_002EBC20_0 *arg0, s32 arg1) {
    func_003020B0(arg1, arg0);
    func_002EBF00((u8 *)arg0 + 8, &arg1);
    arg0->unk_vf1C();
}
}
