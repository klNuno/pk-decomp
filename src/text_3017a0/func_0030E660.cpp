#include "common.h"

class unk_func_0030E660_0 {
public:
    virtual void unk_vf08(s32);
    u8 pad_04[0xC];
    unk_func_0030E660_0 *unk_10;
};

extern "C" {
void func_002D2BB0(...);
void func_00308B80(...);
void func_00308BE0(...);
extern u8 D_00360898;
extern unk_func_0030E660_0 *D_003608A0;
extern s32 D_003608A8;

void func_0030E660(unk_func_0030E660_0 *arg0) {
    arg0->unk_vf08(-1);
    if (D_00360898 == 0) {
        func_002D2BB0(arg0);
        return;
    }
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
    arg0->unk_10 = D_003608A0;
    D_003608A0 = arg0;
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
}
}
