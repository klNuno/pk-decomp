#include "common.h"

extern "C" {
class unk_func_002F7F90_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
};

void func_002FCA90(...);
void func_002D2BB0(...);
extern u8 D_0035E8C0[];

unk_func_002F7F90_0 *func_002F7F90(unk_func_002F7F90_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        *(void **)arg0 = D_0035E8C0;
        arg0->unk_vf1C();
        func_002FCA90(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
