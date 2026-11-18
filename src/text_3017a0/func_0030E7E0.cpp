#include "common.h"

extern "C" {
void func_00308B80(...);
void func_00308BE0(...);
bool func_0030DCE0(...);
extern u8 D_00360898;
extern void *D_003608A4;
extern s32 D_003608A8;
}

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
} unk_func_0030E7E0_0;

extern "C" {
bool func_0030E7E0(unk_func_0030E7E0_0 *arg0) {
    bool ret;

    if (!D_00360898) {
        return func_0030DCE0();
    }
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
    ret = arg0->unk_10 || arg0->unk_14 || arg0 == D_003608A4;
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
    return ret;
}
}
