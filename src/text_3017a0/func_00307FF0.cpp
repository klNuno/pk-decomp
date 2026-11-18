#include "common.h"

class unk_func_00307FF0_0 {
public:
    virtual void unk_vf08();
};

typedef struct {
    unk_func_00307FF0_0 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_00307FF0_1;

extern "C" {
void func_00304B00(...);
void func_00308430(...);

unk_func_00307FF0_1 *func_00307FF0(unk_func_00307FF0_1 *arg0, s16 arg1) {
    if (arg0 != 0) {
        if (arg0->unk_08 != 0) {
            func_00308430(arg0->unk_08);
            arg0->unk_08 = 0;
            arg0->unk_00->unk_vf08();
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
}
