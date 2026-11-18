#include "common.h"

class unk_func_00307FA0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(void *, s32);
};

typedef struct unk_func_00307FA0_1 {
    unk_func_00307FA0_0 *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
} unk_func_00307FA0_1;

extern "C" {
void func_00308430(s32);
void func_00307FA0(s32 arg0, unk_func_00307FA0_1 *arg1);
}

extern "C" void func_00307FA0(s32 arg0, unk_func_00307FA0_1 *arg1) {
    if (arg1->unk_0C == 0) {
        func_00308430(arg1->unk_08);
        arg1->unk_08 = 0;
    }
    arg1->unk_00->unk_vf10(arg1, arg1->unk_04);
}
